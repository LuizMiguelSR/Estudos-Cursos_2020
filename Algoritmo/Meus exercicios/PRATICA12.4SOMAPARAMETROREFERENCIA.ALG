Algoritmo "Pratica12.4SomaParametroReferencia"
Var
x, y: inteiro
procedimento soma (var a, b: inteiro)
inicio
      a <- a + 1
      b <- b + 2
      escreval("Valor de a = ",a)
      escreval("Valor de b = ",b)
      escreval("Soma a + b = ",a+b)
fimprocedimento
Inicio
      x <- 4
      y <- 8
      soma (x, y)
      escreval("Valor de x = ", x)
      escreval("Valor de y = ", y)
Fimalgoritmo