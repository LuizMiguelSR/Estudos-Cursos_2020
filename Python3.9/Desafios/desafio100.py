from random import randint
from time import sleep
numeros = []
for i in range(0,5):
    numeros.append(randint(1,10))

def somapar(num):
    soma = 0
    for d in range(0,5):
        if num[d]%2==0:
            soma += num[d]
    print(f'Somando os valores pares de {num}, temos {soma} pares')


def sorteia(num):
    print(f'Sorteando 5 valores da lista: ', end='')
    for c in range(0,5):
        sleep(0.5)  
        print(f'{num[c]}', end=' ', flush=True)
    print('PRONTO!')


sorteia(numeros)
somapar(numeros)