Algoritmo "Lugaresreservados"
Var
   cad, l: inteiro
   disp: vetor[1..6] de caractere
   r: caractere
procedimento mostrarfileira()
var i: inteiro
inicio
      para i <- 1 ate 3 faca
           se (disp[i] = "") entao
              escreva ("[ B", i:2, " ]")
           senao
              escreva ("[ -- ]")
           fimse
      fimpara
      escreval ()
      escreval ("---------------------")
fimprocedimento
Inicio
      repita
            limpatela
            mostrarfileira()
            escreva ("Reservar a cadeira: B")
            leia (cad)
            se (disp[cad] = "") entao
               disp[cad] <- "X"
               escreval("Cadeira B",cad, " RESERVADA!")
            senao
               escreval("ERRO: Lugar ocupado!")
            fimse
            escreva("Quer reservar outro lugar? [S/N]")
            leia(r)
      ate (r = "N")
Fimalgoritmo