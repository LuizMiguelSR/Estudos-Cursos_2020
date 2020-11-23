def area (larg, comp):
    a = larg*comp
    print(f'A área de um terreno {larg:.1f} x {comp:.1f} é de {a:.1f}m²')


print('Controle de terrenos')
larg=float(input('Largura (m): '))
comp=float(input('Comprimento (m): '))
print('-'*40)
area (larg, comp)
