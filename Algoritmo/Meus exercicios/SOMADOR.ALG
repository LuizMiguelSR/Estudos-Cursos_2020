Algoritmo "somador"
Var
n, s: inteiro
resp: caractere
Inicio
      s <- 0
      repita
            escreva ("Digite o o. valor ==> ")
            leia(n)
            s <- s + n
            escreva("Você quer continuar? [S/N] ")
            leia(resp)
      ate (resp = "n")
      Escreval("A soma de todos os valores digitados e ", s)
Fimalgoritmo