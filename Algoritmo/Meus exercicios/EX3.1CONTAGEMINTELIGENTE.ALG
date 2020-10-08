Algoritmo "contagemInteligente"
Var
n1, n2, cont: inteiro
Inicio
      escreval ("Contagem inteligente")
      escreva ("Início: ")
      Leia (n1)
      escreva ("Fim: ")
      Leia (n2)
           se (n1 > n2) então
              cont <- n1
              enquanto (cont >= n2)faca
                       escreva (cont, "... ")
                       cont <- cont - 1
              fimenquanto
           fimse
               se (n1 < n2) entao
                   cont <- n1
                   enquanto (cont <= n2)faca
                            escreva (cont, "... ")
                            cont <- cont + 1
                   fimenquanto
                fimse
Fimalgoritmo