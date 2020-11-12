listan = [[], []]
num = 0
for p in range (1,8):
    num=(int(input(f'Digite o {p}o. valor: ')))
    if num % 2 == 0:
        listan[0].append(num)
    else:
        listan[1].append(num)
print('=-'*40)
listan[0].sort()
listan[1].sort()
print(f'O valores pares digitados foram {listan[0]}')
print(f'O valores ímpares foram {listan[1]}')
