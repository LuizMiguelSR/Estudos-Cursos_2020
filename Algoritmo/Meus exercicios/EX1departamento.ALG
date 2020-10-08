Algoritmo "EX1"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 25/08/2020
Var
// Seção de Declarações das variáveis 
a1, a2, a3: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("----------------------------")
   escreval("--Departamento de trânsito--")
   escreval("----------------------------")
   escreva("Ano atual (yyyy): ")
   leia(a1)
   escreva("Ano de nascimento (yyyy): ")
   leia(a2)
   a3 <- a1 - a2
   se (a3 >= 18) entao
      escreval("---------STATUS-------------")
      escreval("IDADE ",a3)
      escreval("APTO A DIRIGIR")
      escreval("----------------------------")
   senao
        escreval("---------STATUS-------------")
        escreval("IDADE ",a3)
        escreval("INAPTO A DIRIGIR")
        escreval("----------------------------")
   fimse
Fimalgoritmo