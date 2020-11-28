from time import sleep
def analise(num):
    maior = 0
    pos = 0
    tam = len(num)
    print('-='*30)
    print('Analisando valores passados...')
    while pos < len(num):
        if pos == 0:
            maior = num[pos]
        else:
            if num[pos] > maior:
                maior = num[pos]
        sleep(0.5)
        print(f'{num[pos]}', end=' ', flush=True)
        pos += 1
    print(f' Foram informados {tam} valores ao todo.', end='')
    print()
    print(f'O maior valor informado foi {maior}.')
    print('-='*30)


valores = [2, 9, 4, 5, 7, 1]
analise(valores)
valores = [4, 7, 0]
analise(valores)
valores = [1, 2]
analise(valores)
valores = [6]
analise(valores)
valores = [0]
analise(valores)
