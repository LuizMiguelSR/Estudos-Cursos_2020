Algoritmo "ParImpar"
Var
   n: inteiro
   r: caractere
funcao ParouImpar (v: inteiro): caractere
inicio
      se (v%2 = 0) entao
         retorne "PAR"
      senao
         retorne "IMPAR"
      fimse
fimfuncao
Inicio
      escreva("Digite um numero: ")
      leia (n)
      r <- ParouImpar (n)
      escreva ("O numero ", n, " e um valor ", r)
Fimalgoritmo