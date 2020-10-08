Algoritmo "somadorNumerico"
Var
   cont, n, s, m, m2: inteiro
Inicio
      cont <- 1
      s <-0
      enquanto (cont <= 5)faca
               Escreva("Digite o ", cont, "o. valor : ")
               leia (n)
               se (n > m) entao
                  m <- n
                    se (m2 = 0)ou(n < m2) entao
                       m2 <- n
                    fimse
               fimse
               s <- s + n
               cont <- cont + 1
      fimenquanto
      escreval("A soma de todos valores foi: ", s)
      escreval("O maior valor digitado foi: ", m)
      escreval("O menor valor digitado foi: ", m2)
Fimalgoritmo