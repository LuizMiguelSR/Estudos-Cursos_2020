pt = int(input('Digite o primeiro termo: '))
rz = int(input('Digite a razão: '))
c = 1
t = pt
total = 0
mais = 10
while mais != 0:
    total = total + mais
    while c <= total:
        print('{} '.format(t),end=' ')
        t += rz
        c += 1
    print('PAUSA')
    mais = int(input('Quantos termos você quer a mais? '))
print('Progressão finalizada com {} termos mostrados'.format(total))
