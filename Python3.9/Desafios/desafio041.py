idade=int(input('Informe a sua idade: '))
if idade <= 9:
    print('Com {} anos você é da categoria MIRIM'.format(idade))
elif idade >=10 and idade <=14:
    print('Com {} anos você é da categoria INFANTIL'.format(idade))
elif idade >=15 and idade <=19:
    print('Com {} anos você é da categoria JUNIOR'.format(idade))
elif idade == 20:
    print('Com {} anos você é da categoria SÊNIOR'.format(idade))
else:
    print('Com {} anos você é da categoria MASTER'.format(idade))
