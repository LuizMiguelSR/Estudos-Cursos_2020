Algoritmo "fatorial"
Var
c, n, f: inteiro
r: caractere
Inicio
repita
      Escreva("Digite um numero: ")
      leia(n)
      c <- n
      f <- 1
      repita
            f <- F * c
            c <- c - 1
      ate (c < 1)
      Escreval ("O valor do fatorial", n," e igual a ",f)
      Escreva ("Quer continuar [S/N] ")
      leia(r)
      limpatela
ate (r = "n")
Fimalgoritmo