Algoritmo "EX2MEDIA"
Var
// Seção de Declarações das variáveis 
n1, n2, n3: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("---------------")
   escreval("-ESCOLA JAVALI-")
   escreval("---------------")
   escreva("Primeira nota: ")
   leia(n1)
   escreva("Segunda nota: ")
   leia(n2)
   n3 <- (n1 + n2) / 2
      se (n3 >= 0) e (n3 < 1) entao
         Escreva ("Média ",n3)
         Escreva ("Aproveitamento: F")
      senao
           se (n3 >= 1) e (n3 < 2) entao
              Escreval ("Média ",n3)
              Escreval ("Aproveitamento: E")
           senao
                se (n3 >= 2) e (n3 < 4) entao
                   Escreval ("Média ",n3)
                   Escreval ("Aproveitamento: D")
                senao
                     se (n3 >= 4) e (n3 < 6) entao
                        Escreval ("Média ",n3)
                        Escreval ("Aproveitamento: C")
                     senao
                          se (n3 >= 6) e (n3 < 8) entao
                             Escreval ("Média ",n3)
                             Escreval ("Aproveitamento: B")
                          senao
                               se (n3 >= 8) e (n3 <= 10)
                                  Escreval ("Média ",n3)
                                  Escreval ("Aproveitamento: A")
                               fimse
                          fimse
                     fimse
                fimse
           fimse
      fimse
Fimalgoritmo