r=''
c=0
s=0
med=0
maior = 0
menor = 0
while r != 'N':
    n=int(input('Digite um número: '))
    c += 1
    s = s + n
    if c == 1:
        maior = n
        menor = n
    else:
        if n > maior:
            maior = n
        if n < menor:
            menor  = n
    r=str(input('Deseja continuar? [S/N] ')).upper().strip()
med = s/c
print('A média foi {:.2f} '.format(med))
print('O maior valor lido foi {} e o menor foi {}'.format(maior, menor))
