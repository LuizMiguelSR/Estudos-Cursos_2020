def jogador(nome='<desconhecido>', gol=0):
    print(f'O jogador {nome} fez {gol}(s) no campeonato')


n=str(input('Nome do jogador: '))
g=str(input('Quantidade de gols: '))
if g.isnumeric():
    g = int(g)
else:
    g = 0
if n.strip() == '':
    jogador(gol = g)
else:
    jogador(n, g)
