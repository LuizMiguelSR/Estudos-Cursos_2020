s1=0
s2=0
for c in range(0,6):
    ano=int(input('Digite o ano de nascimento: '))
    calc=2020-ano
    if calc <= 21:
        s1=s1+1
    else:
        s2=s2+1
print('Temos {} pessoas maiores de 21 anos e {} pessoas menores de 21 anos'.format(s2,s1))
