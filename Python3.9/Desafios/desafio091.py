from random import randint
from time import sleep
from operator import itemgetter

jogador = dict()
ranking = list()

print('Valores sorteados:')
for c in range(1,5):
    jogador[f'jogador {c}']=randint(1,6)
for c, v in jogador.items():
    print(f'{c} tirou {v} no dado.')
    sleep(1)

print('Ranking dos jogadores:')
ranking = sorted(jogador.items(), key=itemgetter(1), reverse=True)
for i, v in enumerate(ranking):
    print(f'{i+1}° lugar: {v[0]} com {v[1]}.')
    sleep(1)
