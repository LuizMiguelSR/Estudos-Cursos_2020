idade=int(input('Quantos anos você tem? '))
if idade < 18:
    tempo = 18 - idade
    print('Falta {} anos para se apresentar ao serviço militar.'.format(tempo))
elif idade > 18:
    tempo = idade - 18
    print('Fazem {} ano(os) que você passou do prazo de alistamento.'.format(tempo))
else:
    print('Com {} anos. Está na hora de se alistar no serviço militar'.format(idade))
