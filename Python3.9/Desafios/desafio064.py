n=0
c=0
s=0
while n != 999:
    n=int(input('Digite um número: ')) 
    if n != 999:
        s = s+ n
        c += 1
print('A soma dos números é igual a {} e foram digitados {} vezes'.format(s,c))
