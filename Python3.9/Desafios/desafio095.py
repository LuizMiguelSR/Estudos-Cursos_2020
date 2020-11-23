time = list()
camp=dict()
partidas = list()

while True:
    camp.clear()
    camp['nome']=str(input('Nome do jogador: '))
    qtde=int(input(f'Quantas partidas {camp["nome"]} jogou? '))
    partidas.clear()
    for i in range(0,qtde):
        partidas.append(int(input(f'Quantos gols na partida {i+1}? ')))
    camp['gols'] = partidas[:]
    camp['total'] = sum(partidas)
    time.append(camp.copy())
    while True:
        resp = str(input('Quer continuar? [S/N] ')).upper()[0]
        if resp in 'SN':
            break
        print('ERRO! Responda apenas S ou N')
    if resp == 'N':
        break
print('-='*30)
print('cod ', end='')
for i in camp.keys():
    print(f'{i:<15}', end='')
print()
print('-='*30)
for k, v in enumerate(time):
    print(f'{k:>4} ', end='')
    for d in v.values():
        print(f'{str(d):<15}', end='')
    print()
print('-='*30)
while True:
    busca=int(input('Mostrar dados de qual jogador? '))
    if busca == 999:
        break
    if busca >= len(time):
        print(f'ERRO! Não existe jogador com código {busca}!')
    else:
        print(f' -- LEVANTAMENTO DO JOGADOR {time[busca]["nome"]}:')
        for i, g in enumerate(time[busca]['gols']):
            print(f'    No jogo {i+1} fez {g} gols.')
    print('-='*30)
print('<< VOLTE SEMPRE >>')
