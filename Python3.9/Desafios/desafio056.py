soma=0
idade1=0
nome1=''
cmi=0
for c in range(1,5):
    nome=str(input('{}ª pessoa digite o seu nome: '.format(c)))
    idade=int(input('{}ª pessoa digite sua idade: '.format(c)))
    sexo=int(input('{}ª pessoa digite 1 para homem e 2 para mulher: '.format(c)))
    soma=soma+idade
    if sexo == 1:
        if idade > idade1:
            idade1=idade
            nome1=nome
    else:
        if idade < 20:
            cmi=cmi+1
media=soma/4
print('A média de idade é {:.0f} anos'.format(media))
print('O homem mais velho se chama {} e tem {} anos'.format(nome1, idade1))
print('No grupo tem {} mulheres com menos de 20 anos'.format(cmi))
