print('-'*30)
print('Sequência Fibonacci')
print('-'*30)
t=int(input('Quantos termos quer mostrar? '))
f1 = 0
f2 = 1
print('~'*30)
print('{} {}'.format(f1, f2), end='')
cont = 3
while cont <= t:
    f3 = f1 + f2
    print(' {}'.format(f3), end='')
    f1 = f2
    f2 = f3
    cont += 1
print (' FIM')
print('~'*30)
