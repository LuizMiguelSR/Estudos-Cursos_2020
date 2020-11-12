ano = int(input('Que ano quer analisar? '))
if ano % 4 == 0:
    print('O ano {} é bissexto'.format(ano))
else:
    print('O ano {} não é bissexto'.format(ano))
