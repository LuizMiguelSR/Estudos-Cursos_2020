n1=float(input('Digite a 1ª nota: '))
n2=float(input('Digite a 2ª nota: '))
n3 = (n1+n2)/2
if n3 < 5.0:
    print('Com a média {:.1f} você está REPROVADO'.format(n3))
elif n3 >= 5.0 and n3 <= 6.9:
    print('Com a média {:.1f} você está em RECUPERAÇÂO'.format(n3))
else:
    print('Com a média {:.1f} você está está APROVADO'.format(n3))
