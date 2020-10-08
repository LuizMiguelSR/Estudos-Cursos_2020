Algoritmo "qtosvalores0a10"
Var
c, v, tot010, simp: inteiro
Inicio
      para c <- 1 ate 6 faca
           Escreva("Digite um valor: ")
           leia (v)
           se (v >= 0) e (v<=10) entao
              tot010 <- tot010 + 1
           fimse
           se (v%2=1) entao
                 simp <- simp + v
           fimse
      fimpara
      Escreval("Ao todo foram ", tot010, " valores entre 0 e 10")
      Escreval("Neste intervalo a soma de impares foi: ", simp)
Fimalgoritmo