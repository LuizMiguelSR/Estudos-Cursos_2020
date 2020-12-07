def notas(*n, sit=False):
    """
    -> Determina o boletim de um aluno.
    :param n: sao as notas do aluno.
    :param sit: (opcional) mostra a situacao do aluno.
    :return: um dicionario com o boletim do aluno.
    """
    aluno = dict()
    cn = maior = menor = som = med = 0

    for c in range (0,len(n)):
        cn = cn + 1
        som = som + n[c]
        if c == 0:
            maior = n[c]
            menor = n[c]
        else:
            if n[c] > maior:
                maior = n[c]
            if n[c] < menor:
                menor = n[c]
    
    med = som / cn
    aluno['total'] = cn
    aluno['maior'] = maior
    aluno['menor'] = menor
    aluno['média'] = med
    if sit:
        if med >= 7.0:
            aluno['situação'] = 'Boa'
        elif med >= 5.0 and med <= 6.9:
            aluno['situação'] = 'Razoável'
        else:
            aluno['situação'] = 'Ruim'
    print('--'*30)
    return aluno
    
resp = notas(5.5, 9.5, 10, 6.5, sit=True)
print(resp)
help(notas)
