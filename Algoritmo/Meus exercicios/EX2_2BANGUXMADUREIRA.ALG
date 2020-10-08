Algoritmo "EX2_2BANGUXMADUREIRA"
Var
n1, n2, n3: inteiro
Inicio
   Escreval ("Bangu X Madureira")
   Escreval ("Qtos gols do Bangu: ")
   Leia (n1)
   Escreval ("Qtos gols do Madureira: ")
   Leia (n2)
   se (n2 > n1) entao
      n3 <- n2 - n1
      Escreval("Vitória do Madureira!")
   senao
        se (n1 > n2) entao
           n3 <- n1 - n2
           Escreval("Vitória do Bangu!")
        senao
             se (n1 = n2) entao
                n3 <- 0
             fimse
        fimse
   fimse
        escolha n3
                caso 1, 2, 3
                     Escreval("Partida normal!")
                caso 0
                     Escreval("Empate!")
                outrocaso
                     Escreval ("Goleada!")
        fimescolha
Fimalgoritmo