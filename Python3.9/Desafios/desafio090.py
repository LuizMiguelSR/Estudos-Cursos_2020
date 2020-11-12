nome = dict()

nome['nome'] = str(input('Nome: '))
nome['media'] = float(input(f'Média de {nome["nome"]}: '))

if nome['media'] <= 6.00:
    nome['situacao']='Reprovado'
else:
    nome['situacao']='Aprovado'

print(f'Nome é igual a {nome["nome"]}')
print(f'Média é igual a {nome["media"]:.2f}')
print(f'Situação é igual a {nome["situacao"]}')
