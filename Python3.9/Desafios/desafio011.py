n1=int(input('Informe a altura da parede: '))
n2=int(input('Informe a largura da parede: '))
area=n1*n2
qtde=area/2
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('Para pintar uma parede de {}{:.2f}{} m2 é necessário {}{:.2f}{} litros de tinta'.format(cores['amarelo'],area,cores['limpa'],cores['amarelo'], qtde,cores['limpa']))
