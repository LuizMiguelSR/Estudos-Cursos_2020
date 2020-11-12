km=int(input('Digite a quantidade de quilometros rodados: '))
dias=int(input('Digite o quantidade de dias: '))
qtded=dias*60.00
qtdek=km*0.15
qtdet=qtded+qtdek
print('O total a pagar é de R$ {:.2f}'.format(qtdet))
