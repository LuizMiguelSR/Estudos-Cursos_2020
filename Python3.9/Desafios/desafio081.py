valores = []
cont=0
while True:
    valores.append(int(input('Digite um valor: ')))
    r = str(input('Quer continuar? [S/N] '))
    if r in 'Nn':
        break
print('-='*30)
print(f'Foram digitados {len(valores)} números')
valores.sort(reverse=True)
print(f'Você digitou os valores {valores}')
if 5 in valores:
    print(f'O número 5 apareceu na lista')
else:
    print(f'O número 5 não está na lista')
