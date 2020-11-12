pre=float(input('Informe o preço: '))
print('Informe a condição de pagamento ')
con=int(input('1-A vista dinheiro 2-A vista Cartão 3-2x Cartão 4-3x+ Cartão'))
if con == 1:
    des=pre*0.90
    print('O preço a vista em dinheiro será de R$ {:.2f}'.format(des))
elif con == 2:
    des=pre*0.95
    print('O preço a vista no cartão será de R$ {:.2f}'.format(des))
elif con == 3:
    print('O preço em 2x no cartão será de R$ {:.2f}'.format(pre))
else:
    jur=pre*1.2
    print('O preço em 3x ou mais no cartão será de R$ {:.2f}'.format(jur))
