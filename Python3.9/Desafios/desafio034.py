sal=float(input('Digite o seu salário: '))
if sal > 1250.00:
    nsal=sal*(1+0.10)
    print('Seu novo salário será de R$ {:.2f}'.format(nsal))
else:
    nsal=sal*(1+0.15)
    print('Seu novo salário será de R$ {:.2f}'.format(nsal))
