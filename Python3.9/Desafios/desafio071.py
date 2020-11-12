print('='*30)
n='Banco CEV'
print(f'{n:^30}')
print('='*30)
while True:
    val = int(input('Qual valor você quer sacar? R$ '))
    c50 = val//50
    val = val - (c50 * 50)
    c20 = val//20
    val = val - (c20 * 20)
    c10 = val//10
    val = val - (c10 * 10)
    c1 = val//1
    val = val - (c1 * 1)
    break
print(f'Total de {c50} cédulas de R$ 50')
print(f'Total de {c20} cédulas de R$ 20')
print(f'Total de {c10} cédulas de R$ 10')
print(f'Total de {c1} cédulas de R$ 1')
print('-'*30)
print('Volte sempre ao BANCO CEV! Tenha um bom dia!')
