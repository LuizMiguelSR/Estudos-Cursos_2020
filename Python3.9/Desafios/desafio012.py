n1=float(input('Digite o preço do produto: '))
n2=n1*(1-0.05)
cores = {'limpa':'\033[m', 
         'azul':'\033[34m', 
         'amarelo':'\033[33m'}
print('O novo preço do produto com desconto é R$ {}{:.2f}{}'.format(cores['azul'],n2,cores['limpa']))
