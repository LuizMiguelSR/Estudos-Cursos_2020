val=(int(input('Digite um número: ')), int(input('Digite outro número: ')), int(input('Digite mais um número: ')), int(input('Digite o último número: ')))
print(f'Você digitou os valores {val}')
print(f'O valor 9 apareceu {val.count(9)} vezes')
print(f'O valor 3 foi digitado na {val.index(3)+1}ª posição')
print(f'Os valores pares digitados foram: ', end='')
for c in val:
    if c%2 == 0:
        print(f'{c} ', end='')
  