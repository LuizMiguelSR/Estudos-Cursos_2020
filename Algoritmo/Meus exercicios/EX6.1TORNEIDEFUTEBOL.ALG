Algoritmo "Ex6.1TorneiDeFutebol"
Var
   i: inteiro
   time: vetor[1..3] de caractere
   l, c: inteiro
Inicio
      escreval("CAMPEONATO PAULISTA")
      para i <- 1 ate 3 faca
           escreva ("Nome do ", i,"o. time: ")
           leia (time[i])
      fimpara
      limpatela
      Para l <- 1 ate 3 faca
      Para c <- 1 ate 3 faca
         Se (l <> c) entao
            EscrevaL(time[l]:12, " [ ] x [ ] ", time[c]:12)
         FimSe
      FimPara
   FimPara
Fimalgoritmo