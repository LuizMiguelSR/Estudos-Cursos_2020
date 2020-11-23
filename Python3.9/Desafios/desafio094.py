pessoa = dict()
grupo = list()
soma = med = 0
while True:
    pessoa.clear()
    pessoa['nome']=str(input('Nome: '))
    while True:
        pessoa['sexo']=str(input('Sexo: [M/F] ')).upper()[0]
        if pessoa['sexo'] in 'MF':
            break
        print('ERRO! Por favor, digite apenas M ou F.')
    pessoa['idade']=int(input('Idade: '))
    soma += pessoa['idade']
    grupo.append(pessoa.copy()) 
    while True:
        sair=str(input('Quer continuar? [S/N] ')).upper()[0]
        if sair in 'SN':
            break
        print('ERRO! Por favor, digite apenas S ou N.')
    if sair in 'N':
        break
print('-='*30)
print(f'Ao todo temos {len(grupo)} pessoas cadastradas.')
med = soma /len(grupo) 
print(f'A média de idade é de {med:5.2f} anos.')
print('As mulheres cadastradas foram', end='')
for p in grupo:
    if p['sexo'] in 'Ff':
        print(f', {p["nome"]}', end='')
print()
print('Lista das pessoas que estão acima da média: ', end='')
for p in grupo:
    if p['idade'] >= med:
        print('    ', end='')
        for k, v in p.items():
            print(f'{k} = {v}; ', end='')
        print()
print('<<< ENCERRADO >>>')
