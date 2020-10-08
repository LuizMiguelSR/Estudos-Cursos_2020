Algoritmo "TesteFuncoes"
Var
   n: caractere
   c: inteiro
Inicio
      escreva("Digite seu nome: ")
      Leia(n)
      escreval("Total de letras do seu nome: ", compr(n))
      escreval("Seu nome em maiusculas e ", maiusc(n))
      escreval("Seu nome em minusculas e ", minusc(n))
      escreval("A primeira letra do seu nome e ", copia(n, 1, 1))
      escreval("A ultima letra do seu nome e ", copia(n, compr(n), 1))
      escreval("Seu nome tem a letra U na posicao ", pos("U", maiusc(n)))
      escreval("O codigo da letra A e ", asc("U"))
      escreval("A letra de codigo 85 e ", carac(85))
      para c <- compr(n) ate 1 passo -1 faca
           escreva(copia(maiusc(n),c,1))
      fimpara
Fimalgoritmo