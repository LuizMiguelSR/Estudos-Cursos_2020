n1=int(input('Digite um número: '))
n2=int(input('Digite um número: '))
n3=int(input('Digite um número: '))
if n1 > n2 and n2 > n3:
    maior = n1
    menor = n3
    print('Maior {} Menor {}'.format(n1,n3))
if n1 > n3 and n3 > n2:
    maior = n1
    menor = n2
    print('Maior {} Menor {}'.format(n1,n2))
if n2 > n1 and n1 > n3:
    maior = n2
    menor = n3
    print('Maior {} Menor {}'.format(n2,n3))
if n2 > n3 and n3 > n1:
    maior = n2
    menor = n1
    print('Maior {} Menor {}'.format(n2,n1))
if n3 > n2 and n2 > n1:
    maior = n3
    menor = n1
    print('Maior {} Menor {}'.format(n3,n1))
if n3 > n1 and n1 > n2:
    maior = n3
    menor = n2
    print('Maior {} Menor {}'.format(n3,n2))
