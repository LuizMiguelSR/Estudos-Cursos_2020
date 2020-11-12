#n1=int(input('Digite um número: '))
#f=1
#for c in range(n1,0,-1):
#    f=f*c
#print('O fatorial de {}! é {}'.format(n1,f))
c=int(input('Digite um número: '))
d=c
f=1
while c != 0:
    f=f*c
    c-=1
print('O fatorial de {}! é {}'.format(d,f))
