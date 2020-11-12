n1 = int(input('Digite 1º valor: '))
n2 = int(input('Digite 2º valor: '))
if n1 > n2:
    print('{} é maior que {} portanto o 1º valor é o maior'.format(n1,n2))
elif n2 > n1:
    print('{} é maior que {} portanto o 2º valor é o maior'.format(n2,n1))
else:
    print('Ambos os valores são iguais')
