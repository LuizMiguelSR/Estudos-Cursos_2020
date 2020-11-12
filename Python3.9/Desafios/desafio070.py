cont1 = cont2 = menor = 0
som = 0
nome1 = ''
print('Loja Super Barato')
print('-'*40)
while True:
    nome = str(input('Nome do produto: ')).upper().strip()
    preco = float(input('Preço: R$ '))
    som = som + preco
    cont2 += 1
    if preco > 1000:
        cont1 += 1
    if cont2 == 1:
        nome1 = nome
        menor = preco
    else:
        if preco < menor:
            menor = preco
            nome1 = nome
    rep = str(input('Quer Continuar? [S/N] ')).upper().strip()
    while rep != 'S' and rep != 'N':
        rep = str(input('Quer Continuar? [S/N] ')).upper().strip()
    if rep == 'S':
        print('-'*40)
    else:
        break   
print('========== FIM DO PROGRAMA ===========')
print(f'Total da compra foi: R$ {som:.2f}')
print(f'Temos {cont1} produtos custando mais de R$ 1000.00')
print(f'O produto mais barato foi {nome1} e custa R$ {menor}')
