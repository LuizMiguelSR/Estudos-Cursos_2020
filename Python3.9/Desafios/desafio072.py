ext = ('zero','um','dois','três','quatro','cinco','seis','sete','oito','nove','dez','onze','doze','treze','quatorze','quinze','dezesseis','dezessete','dezoito','dezenove','vinte')
num = int(input('Digite um número entre 0 e 20: '))
if num < 0 or num > 20:
    while True:
        num = int(input('Tente novamente. Digite  um número entre 0 e 20: '))
        if num >= 0 and num <= 20:
            break
print(f'Você digitou o número {ext[num]}')
