cont = som = 0
while True:
    n = int(input('Digite um número: '))
    if n == 999:
        break
    cont += 1
    som += n
print(f'Foram somados {cont} vezes e a soma foi {som}')
