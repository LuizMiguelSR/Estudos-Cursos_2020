vc = float(input('Digite o valor da casa: '))
sc = float(input('Salário do comprador: '))
qa = int(input('Em quantos anos deseja pagar: '))
qm = qa * 12
pm = vc / qm
calc = (pm / sc) * 100
if calc <= 30:
    print('Empréstimo aprovado! O valor das parcelas mensais são R$ {:.2f}'.format(pm))
else:
    print('Empréstimo negado! Sua proposta excede {:.2f} % do seu salário.'.format(calc))
