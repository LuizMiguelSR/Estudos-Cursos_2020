km=int(input('Qual a distância da viagem? '))
if km <= 200:
    pre=km*0.5
    print('O preço da passagem é de R$ {:.2f}'.format(pre))
else:
    pre=km*0.45
    print('O preço da passagem é de R$ {:.2f}'.format(pre))
