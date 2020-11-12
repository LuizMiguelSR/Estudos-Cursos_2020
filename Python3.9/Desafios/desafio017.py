import math
n1 = int(input('Digite o cateto adjacente: '))
n2 = int(input('Digite o cateto oposto: '))
n3 = math.hypot(n1, n2)
print('A hipotenusa é: {:.2f}'.format(n3))
