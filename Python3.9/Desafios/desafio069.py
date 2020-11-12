cont1 = cont2 = cont3 = 0
print('-'*40)
print('CADASTRE UMA PESSOA')
print('-'*40)
while True:
    idade = int(input('Idade: '))
    sexo = str(input('Sexo: [M/F] ')).upper().strip()
    while sexo != 'M' and sexo != 'F':
        sexo = str(input('Sexo: [M/F] ')).upper().strip()
    if idade > 18:
        cont1 += 1
    if sexo ==  'M':
        cont2 += 1
    if sexo == 'F' and idade < 20:
        cont3 += 1
    rep = str(input('Quer Continuar? [S/N] ')).upper().strip()
    while rep != 'S' and rep != 'N':
        rep = str(input('Quer Continuar? [S/N] ')).upper().strip()
    if rep == 'S':
        print('-'*40)
        print('CADASTRE UMA PESSOA')
        print('-'*40)
    else:
        break   
print('========== FIM DO PROGRAMA ===========')
print(f'Total de pessoas com mais de 18 anos: {cont1}')
print(f'Ao todo temos {cont2} homens cadastrados')
print(f'E temos {cont3} mulheres com menos de 20 anos')
