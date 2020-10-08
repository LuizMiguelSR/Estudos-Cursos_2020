Algoritmo "Pratica12.3ParouImparProcedimento"
Var
n: inteiro
procedimento ParOuImpar(V: inteiro)
inicio
      se (V%2 = 0) entao
         Escreval("O numero ", V, " e PAR")
      senao
         Escreval("O numero ", V," e IMPAR")
      fimse
fimprocedimento
Inicio
      Escreva("Digite um numero: ")
      Leia (N)
      ParOuimpar(N)
Fimalgoritmo