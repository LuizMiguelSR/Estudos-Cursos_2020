from time import sleep
def ajuda(com):

    while True:
        sleep(1)
        tam = 'SISTEMA DE AJUDA PYHELP'
        tam1 = len(tam) + 4
        print('\033[0;30;42m~\033[m'*tam1)
        print(f'\033[0;30;42m  {tam}  \033[m')
        print('\033[0;30;42m~\033[m'*tam1)
        n = str(input(com)).lower().strip()
        if n == 'fim':
            sleep(1)
            tam4 = (f"ATÉ LOGO!")
            tam5= len(tam4) + 4
            print('\033[0;30;41m~\033[m'*tam5)
            print(f'\033[0;30;41m  {tam4}  \033[m')
            print('\033[0;30;41m~\033[m'*tam5)
            break
        else:
            sleep(1)
            tam2 = (f"ACESSANDO O MANUAL DO COMANDO '{n}'")
            tam3= len(tam2) + 4
            print('\033[0;30;46m~\033[m'*tam3)
            print(f'\033[0;30;46m  {tam2}  \033[m')
            print('\033[0;30;46m~\033[m'*tam3)
            sleep(1)
            help(n)


n = ajuda('Função ou Biblioteca > ')