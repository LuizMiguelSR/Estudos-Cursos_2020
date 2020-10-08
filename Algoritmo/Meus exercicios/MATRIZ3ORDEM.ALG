Algoritmo "matriz3ordem"
Var
 mid: vetor[1..3, 1..3] de inteiro
 i, j: inteiro
Inicio
      para i <- 1 ate 3 faca
           para j <- 1 ate 3 faca
               se (i = j) entao
                  mid[i, j] <- 1
               senao
                  mid[i, j] <- 0
               fimse
           fimpara
      fimpara
      para i <- 1 ate 3 faca
           para j <- 1 ate 3 faca
                escreva (mid[i, j]:3)
           fimpara
           escreval()
      fimpara
Fimalgoritmo