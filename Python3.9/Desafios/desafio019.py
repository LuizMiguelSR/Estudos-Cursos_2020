import random
a1 = str(input('Digite o nome do 1º aluno: '))
a2 = str(input('Digite o nome do 2º aluno: '))
a3 = str(input('Digite o nome do 3º aluno: '))
a4 = str(input('Digite o nome do 4º aluno: '))
a5 = [a1, a2, a3, a4]
n1 = random.choice(a5)
print('O aluno escolhido foi {}'.format(n1))
