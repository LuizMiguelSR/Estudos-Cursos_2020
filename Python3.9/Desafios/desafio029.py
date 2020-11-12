vel = int(input('Velocidade do carro: '))
if vel >= 80:
    mult = (vel - 80)*7
    print('Você está a {} km/h você foi multado em R$ {:.2f}'.format(vel,mult))
else:
    print('Você está a {} km/h, PARABÉNS E CONTINUE RESPEITANDO AS LEIS DE TRÂNSITO'.format(vel))
