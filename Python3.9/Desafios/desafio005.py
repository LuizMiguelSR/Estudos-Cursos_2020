n1=int(input('Digite um número: '))
n2=n1+1
n3=n1-1
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('O antecessor de {}{}{} é {}{}{} e seu sucessor é {}'.format(cores['azul'], n1, cores['limpa'], cores['amarelo'], n2, cores['limpa'], n3))
