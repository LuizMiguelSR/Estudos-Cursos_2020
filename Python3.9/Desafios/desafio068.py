import random
cont = 0
print('-='*40)
print('VAMOS JOGAR PAR OU ÍMPAR')
while True:
    print('-='*40)
    user = int(input('Diga um valor '))
    test = str(input('Par ou Ímpar? [P/I]')).upper().strip()
    comp = random.randint(0,999)
    som = user + comp
    if user == 'P':
        if som % 2 == 0:
            print('-'*40)
            print(f'Você jogou {user} e o computador {comp}. Total de {som} DEU PAR')
        else:
            print('-'*40)
            print(f'Você jogou {user} e o computador {comp}. Total de {som} DEU ÍMPAR')
            print('-'*40)
            print('Você PERDEU!')
            print('-='*40)
            print(f'GAME OVER! Você venceu {cont} vezes.')
            break
    else:
        if som % 2 == 1:
            print('-'*40)
            print(f'Você jogou {user} e o computador {comp}. Total de {som} DEU ÍMPAR')
        else:
            print('-'*40)
            print(f'Você jogou {user} e o computador {comp}. Total de {som} DEU PAR')
            print('-'*40)
            print('Você PERDEU!')
            print('-='*40)
            print(f'GAME OVER! Você venceu {cont} vezes.')
            break
    cont += 1
    print('-'*40)
    print('Você VENCEU!')
    print('Vamos jogar novamnte...')
