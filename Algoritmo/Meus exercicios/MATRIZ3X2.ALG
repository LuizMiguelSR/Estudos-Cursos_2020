Algoritmo "Matriz3x2"
Var
   mat: vetor[1..3, 1..2] de inteiro
   l, c: inteiro
Inicio
      para l <- 1 ate 3 faca
           para c <- 1 ate 2 faca
                escreva("Digite o valor da posicao [", l, ",", c, "]: ")
                leia(mat[l,c])
           fimpara
      fimpara
      
      para l <- 1 ate 3 faca
           para c <- 1 ate 2 faca
                escreva (mat[l,c]:5)
           fimpara
           escreval ()
      fimpara
Fimalgoritmo