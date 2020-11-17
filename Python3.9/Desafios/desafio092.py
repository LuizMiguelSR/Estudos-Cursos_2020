from datetime import datetime
cad = dict()

cad['nome']=str(input('Nome: '))
nasc=int(input('Ano de Nascimento: '))
idade = datetime.now().year - nasc
cad['idade']=idade
cad['ctps'] = int(input('Carteira de trabalho (0 não tem): '))

if cad['ctps'] == 0:
    print('-='*40)
    for k, v in cad.items():
        print(f'{k} tem o valor: {v}')
else:
    cad['contratação']=int(input('Ano de contratação: '))
    cad['salário'] = int(input('Salário: R$ '))
    apos=cad['contratação']
    apos2 = (apos - nasc) + 35
    cad['aposentadoria']=apos2

    print('-='*40)
    for k, v in cad.items():
        print(f'{k} tem o valor: {v}')
