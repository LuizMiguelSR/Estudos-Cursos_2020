camp=dict()
partidas = list()

camp['nome']=str(input('Nome do jogador: '))
qtde=int(input(f'Quantas partidas {camp["nome"]} jogou? '))

for i in range(0,qtde):
    partidas.append(int(input(f'Quantos gols na partida {i}? ')))

camp['gols'] = partidas[:]
camp['total'] = sum(partidas)

print('-='*30)
for k, v in camp.items():
    print(f'O campo {k} tem o valor {v}.')

print('-='*30)
print(f'O jogador {camp["nome"]} jogou {len(camp["gols"])} partidas.')

for i, v in enumerate(camp['gols']):
    print(f'    => Na partida {i}, fez {v} gols.')

print(f'Foi um total de {camp["total"]} gols.')
