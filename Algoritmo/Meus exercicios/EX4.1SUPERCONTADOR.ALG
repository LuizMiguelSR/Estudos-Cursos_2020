Algoritmo "EX4.1supercontador"
Var
n, cont, cont2 :inteiro
Inicio
cont <- 1
cont2 <- 10
repita
      Escreval ("=================")
      Escreval ("|     MENU      |")
      Escreval ("=================")
      Escreval ("| [1] De 1 a 10 |")
      Escreval ("| [2] De 10 a 1 |")
      Escreval ("| [3] SAIR      |")
      Escreval ("=================")
      Leia (n)
      escolha n
              caso 1
              repita
                    Escreval (cont, "... ")
                    cont <- cont + 1
              ate (cont > 10)
              caso 2
              repita
                    Escreval (cont2, "... ")
                    cont2 <- cont2 - 1
              ate (cont2 < 1)
      fimescolha
ate (n = 3)
Fimalgoritmo