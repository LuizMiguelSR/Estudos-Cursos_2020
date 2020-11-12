import random
jog=int(input('Escolha 1- Pedra 2- Papel 3- Tesoura '))
maq=random.randint(1,3)
if jog == 1 and maq == 3:
    print(maq)
    print('Você ganhou!')
elif jog == 1 and maq == 2:
    print(maq)
    print('Você perdeu!')
elif jog == 1 and maq == 1:
    print(maq)
    print('Empate')
elif jog == 2 and maq == 1:
    print(maq)
    print('Você ganhou!')
elif jog == 2 and maq == 3:
    print(maq)
    print('Você perdeu!')
elif jog == 2 and maq == 2:
    print(maq)
    print('Empate')
elif jog == 3 and maq == 2:
    print(maq)
    print('Você ganhou!')
elif jog == 3 and maq == 1:
    print(maq)
    print('Você perdeu!')
elif jog == 3 and maq == 3:
    print(maq)
    print('Empate')
