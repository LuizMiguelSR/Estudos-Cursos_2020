lista=[]
par=[]
impar=[]
while True:
   n = int(input('Digite um valor: '))
   lista.append(n)
   if n%2==0:
       par.append(n)
   else:
       impar.append(n)
   r = str(input('Quer continuar? [S/N] '))
   if r in 'Nn' :
       break
print(f'A lista foi {lista}')
print(f'Os pares são {par}')
print(f'Os ímapres são {impar}')
