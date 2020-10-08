Algoritmo "contaNegativos"
Var
   n, c, totn: inteiro
Inicio
      c <- 1
      totn <- 0
      repita
            Escreva("Digite um numero: ")
            Leia(n)
            se (n < 0) entao
               totn <- totn + 1
            fimse
            c <- c + 1
      ate (c > 5)
      Escreval("Foram digitados ", totn, " valores negativos.")
Fimalgoritmo