cont = 0
while True:
    print('-'*30)
    n = int(input('Quer ver a tabuada de qual valor? '))
    print('-'*30)
    if n < 0:
        break
    for cont in range(1,11):
        print(f'{n} x {cont}')
print('PROGRAMA TABUADA ENCERRADO. Volte sempre!')
