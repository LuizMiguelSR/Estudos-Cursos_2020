n1=int(input('Digite um número: '))
n2=int(input('Digite um número: '))
n3=int(input('Digite um número: '))
print('Eles formam um triângulo? ')
if n1 < n2 + n3 and n2 < n1 + n3 and n3 < n1 + n2:
    print('Sim')
else:
    print('Não')
