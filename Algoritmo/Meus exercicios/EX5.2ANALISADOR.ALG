Algoritmo "EX5.2analisador"
Var
n1, v, somv, di5, nul, spar: inteiro
somm: real
Inicio
      para n1 <- 1 ate 5 faca
           escreva("Digite o",n1,"o. valor: ")
           leia (v)
           somv <- somv + v
                se (v%5=0) entao
                   di5 <- di5 + 1
                fimse
                se (nul=0)entao
                   nul <- nul + 1
                fimse
                se (v%2=0)entao
                   spar <- spar + 1
                fimse
      fimpara
      somm <- somv / 5
      escreval("A soma dos valores é: ",somv)
      escreval("A média dos valores é: ",somm)
      escreval("Os valores divisiveis por 5 é: ",di5)
      escreval("A número de valores nulos é: ",nul)
      escreval("A soma dos pares é: ",spar)
Fimalgoritmo