pes=float(input('Digite o seu peso: '))
alt=float(input('Digite a sua altura: '))
imc=pes/(alt*alt)
if imc <= 18.5:
    print('Abaixo do peso')
elif imc >= 18.6 and imc <= 25:
    print('Peso ideal')
elif imc >= 25.1 and imc <= 30:
    print('Sobrepeso')
elif imc >= 30.1 and imc <= 40:
    print('Obesidade')
else:
    print('Obesidade mórbida')
