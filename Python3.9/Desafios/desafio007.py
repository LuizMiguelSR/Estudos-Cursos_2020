n1=int(input('Digite a primeira nota: '))
n2=int(input('Digite a segunda nota: '))
n3=(n1+n2)/2
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('A média das notas foi {}{:.1f}{}'.format(cores['amarelo'],n3,cores['limpa']))
