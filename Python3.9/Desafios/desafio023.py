n1=str(input('Digite uma número de 0 a 9999: ')).strip()
print('A unidade deste núemro é {}'.format(n1[3]))
print('A dezena deste núemro é {}'.format(n1[2]))
print('A centena deste núemro é {}'.format(n1[1]))
print('A milhar deste núemro é {}'.format(n1[0]))
n2=int(input('Digite outro número de 0 a 9999: '))
n3=n2//1000
print('A milhar deste núemro é {}'.format(n3))
n3=(n2//100)-10
print('A centena deste núemro é {}'.format(n3))
n3=(n2//10)%10
print('A unidade deste núemro é {}'.format(n3))
n3=(n2//1)%10
print('A unidade deste núemro é {}'.format(n3))
