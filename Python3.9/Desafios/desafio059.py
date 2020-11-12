n1 = 0
n4 = 0
n2 = int(input('Digite um número: '))
n3 = int(input('Digite outro número: '))
while n1 != 5:
    print('===== O que deseja? ======')
    n1 = int(input('1-Somar \n2-Multiplicar \n3-Maior \n4-Novos Números \n5-Sair\n '))
    if n1 == 1:
        n4 = n2 + n3
        print('A soma entre {} e {} é igual a {}'.format(n2,n3,n4))
    elif n1 == 2:
        n4 = n2 * n3
        print('A multiplicação entre {} e {} é igual a {}'.format(n2,n3,n4))
    elif n1 == 3:
        if n2 > n3:
            print('O número {} é maior que {}'.format(n2,n3))
        elif n2 < n3:
            print('O número {} é menor que {}'.format(n2,n3))
        else:
            print('Os números são iguais')
    elif n1 == 4:
        n2 = int(input('Digite um número: '))
        n3 = int(input('Digite outro número: '))
    elif n1 == 5:
        print('Finalizando...')
        n1=5
    else:
        print('Comando inválido!')