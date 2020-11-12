palavras = ('aprender', 'programar', 'linguagem', 'python')
for p in palavras:
    print(f'\nNa palavra {p.upper()} temos ', end='')
    for letra in p:
        if letra.lower() in 'aeiaou':
            print(letra, end='')
