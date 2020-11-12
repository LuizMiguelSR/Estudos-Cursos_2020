#cont = 1
#while True:
#    print(cont, '-> ', end='')
#    cont += 1
#print('Acabou')
n = s = 0
while True:
    n = int(input('Digite um número: '))
    if n == 999:
        break
    s += n
#print('A soma vale {}'.format(s))
print(f'A soma vale {s}')
