Algoritmo "matrizpar"
Var
   valores: vetor[1..3, 1..3] de inteiro
   l, c, totpar: inteiro
Inicio
   para l <- 1 ate 3 faca
        para c <- 1 ate 3 faca
             escreva ("Digite o valor da posicao [", l, " , ", c," ]: ")
             leia (valores[l, c])
        fimpara
   fimpara
   escreval("MATRIZ")
   escreval ("------------")
   totpar <- 0
   para l <- 1 ate 3 faca
        para c <- 1 ate 3 faca
             se (valores[l,c] % 2 = 0) entao
                escreva("{",valores[l, c]:2, "}")
                totpar <- totpar + 1
             senao
                escreva(valores[l, c]:4)
             fimse
        fimpara
        escreval ()
   fimpara
   escreva("Ao todo foram digitados ",totpar," valores PARES")
Fimalgoritmo