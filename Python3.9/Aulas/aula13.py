#Contagem progressiva
for c in range(0,6):
    print(c)
print('Fim')
#Contagem regressiva
for c in range(6,0,-1):
    print(c)
print('Fim')
#Pulando de 2 em 2
for c in range(0,6,2):
    print(c)
print('Fim')
#Variável como parte de passagem do contador
n= int(input('Digite um número: '))
for c in range(0, n+1):
    print(c)
print('fim')
#Dando a partida e finalizando e pulando casas
i = int(input('Inicio: '))
f = int(input('Fim: '))
p = int(input('Passo: '))
for c in range(i, f+1, p):
    print(c)
print('Fim')
#Entrada de variaveis dentro do laço
s=0
for c in range(0,4):
    n=int(input('Digite um valor: '))
    s += n
print('A soma é {}'.format(s))
