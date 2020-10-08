Algoritmo "creuza01"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/08/2020
Var
// Seção de Declarações das variáveis 
   idade_nasc, idade_atual, idade: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva ("Em que ano nos estamos? ")
   Leia (idade_atual)
   Escreva ("Em que ano eu nasci? ")
   Leia (idade_nasc)
   idade <- (idade_atual - idade_nasc)
   Escreva ("Minha idade será ",idade, " de idade.")
Fimalgoritmo