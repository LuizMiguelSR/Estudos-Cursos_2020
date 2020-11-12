import math
n1 = float(input('Digite um ângulo qualquer: '))
n2 = math.sin(n1)
n3 = math.cos(n1)
n4 = math.tan(n1)
print('O ângulo {:.2f} tem seno de {:.2f}, cosseno de {:.2f} e tangente de {:.2f}'.format(n1, n2, n3, n4))
