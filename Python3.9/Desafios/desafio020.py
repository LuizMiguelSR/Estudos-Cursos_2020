import random
a1 = str(input('Digite o nome do 1º aluno: '))
a2 = str(input('Digite o nome do 2º aluno: '))
a3 = str(input('Digite o nome do 3º aluno: '))
a4 = str(input('Digite o nome do 4º aluno: '))
a5 = [a1, a2, a3, a4]
n1 = random.sample(a5,4)
print('A ordem é {}'.format(n1))
