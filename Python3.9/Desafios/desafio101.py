from datetime import datetime
def voto(idade):
    idade=datetime.now().year - nasc
    if idade < 16:
        print(f'Com {idade} anos o voto é NEGADO')
    elif idade >= 16 and idade < 18:
        print(f'Com {idade} anos o voto é OPCIONAL')
    elif idade >= 18 and idade < 65:
        print(f'Com {idade} anos o voto é OBRIGATÓRIO')
    else:
        print(f'Com {idade} anos o voto é OPCIONAL')


print('--'*30)
nasc=int(input('Em que ano você nasceu? '))
voto(nasc)
