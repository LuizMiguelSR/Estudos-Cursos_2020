Algoritmo "tabuada"
Var
   cont, n, r: inteiro
Inicio
   cont <- 1
   Escreva("Quer ver a tabuada de qual número?")
   leia(n)
   repita
         r <- n * cont
         Escreval(n, " x ", cont, " = ", r)
         cont <- cont + 1
   ate (cont > 10)
Fimalgoritmo