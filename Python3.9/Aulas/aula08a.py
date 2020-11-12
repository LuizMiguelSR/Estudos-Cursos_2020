from math import sqrt, floor
#import math
num = int(input('Digite um número: '))
raiz = sqrt(num)
#raiz = math.sqrt(num)
#print('A raiz de um {} é igual a {}'.format(num, raiz))
#print('A raiz de um {} é igual a {}'.format(num, math.ceil(raiz)))
#print('A raiz de um {} é igual a {}'.format(num, math.floor(raiz)))
print('A raiz de um {} é igual a {:.2f}'.format(num, floor(raiz)))
