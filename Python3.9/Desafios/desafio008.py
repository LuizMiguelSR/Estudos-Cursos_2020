n1=int(input('Digite um valor em metros: '))
n2=n1*100
n3=n1*1000
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('O valor de {}{} metros é igual a {} centimetros e a {} milimetros{}'.format(cores['azul'],n1, n2, n3, cores['azul']))
