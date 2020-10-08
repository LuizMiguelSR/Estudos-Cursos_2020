Algoritmo "conversorinteligente"
Var
   c, q: inteiro
   reais, dolar: real
Inicio
   c <- 1
   escreva ("Quantas vezes voce quer converter? ")
   leia(q)
   enquanto (c <= q) faca
      escreva("Quantos reais eu tenho? R$")
      leia(reais)
      dolar<-reais / 5.61
      escreval("Posso ter US$",dolar)
      c <- c + 1
   fimenquanto
Fimalgoritmo