n1=int(input('Digite um número: '))
n2=n1*2
n3=n1*3
n4=n1**(1/2)
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('O dobro de {}{} é igual a {}, o triplo é igual a {} e a raiz quadrada é igual a {}'.format(cores['azul'],n1, n2, n3, n4))
