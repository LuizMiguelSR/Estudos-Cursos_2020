import random
user=int(input('Digite um número de 1 a 5 '))
num = random.randint(1,5)
if user == num:
    print('O número escolhido pelo computador foi {} VOCÊ VENCEU!'.format(num))
else:
    print('O número escolhido pelo computador foi {} VOCÊ PERDEU!'.format(num))
