n1=float(input('Quanto dinheiro você tem: '))
n2=n1/3.27
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('Com R$ {}{:.2f}{} você pode comprar U$ {}{:.2f}{}'.format(cores['amarelo'],n1,cores['limpa'],cores['amarelo'], n2,cores['limpa']))
