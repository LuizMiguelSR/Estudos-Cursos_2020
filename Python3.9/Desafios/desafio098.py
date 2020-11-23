from time import sleep
def contador():
    print('-='*30)
    print('Contagem de 1 até 10 de 1 em 1')
    for c in range(1,11,1):
        sleep(0.5)
        print(f'{c}', end=' ', flush=True)
    print('FIM!', end='')
    print()

    print('-='*30)
    print('Contagem de 10 até 0 de 2 em 2')
    for c in range(10,0-1,-2):
        sleep(0.5)
        print(f'{c}', end=' ', flush=True)
    print('FIM!', end='')
    print()

    print('-='*30)
    print('Agora é sua vez de personalizar a contagem!')
    ini = int(input('Início: '))
    fim = int(input('Fim: '))
    pas = int(input('Passo: '))
    if ini > fim:
        for c in range(ini,fim-1,-pas):
            sleep(0.5)
            print(f'{c}', end=' ', flush=True)
        print('FIM!', end='')
        print()
    else:
        for c in range(ini,fim+1,pas):
            sleep(0.5)
            print(f'{c}', end=' ', flush=True)
        print('FIM!', end='')
        print()
    print('-='*30)


contador()