res = 1
while res != 0:
    sexo=str(input('Digite seu sexo [M/F] ')).strip().upper()
    if sexo == 'M' or sexo == 'F':
        res = 0
        print('Correto!')
    else:
        print('Digite novamente')
