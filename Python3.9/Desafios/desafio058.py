import random
print('======COMPUTADOR=====')
print('Pensei em um número! Tente adivinhar.')
num = random.randint(0,10)
user=int(input('Digite um número de 0 a 10: '))
c=1
if user == num:
    print('Parabéns você acertou de primeira!')
else:    
    while num != user:
        user=int(input('E agora...(Tente novamente): '))
        c += 1
print('Parabéns você acertou! Você tentou {} vezes até acertar'.format(c))
