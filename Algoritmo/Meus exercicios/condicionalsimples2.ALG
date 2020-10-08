Algoritmo "CalculoIdade"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Curso em vídeo
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Luiz Miguel Santos Rodrigues
// Data atual  : 25/08/2020
Var
// Seção de Declarações das variáveis 
ano, nasc, idade: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva("Em que ano estamos? ")
   Leia(ano)
   Escreva("Em que ano você nasceu? ")
   Leia(nasc)
   idade <- ano - nasc
   Escreval ("Em ", ano, " você terá ", idade, " de idade")
            se (idade>=21) entao
            Escreval ("E você já terá atingido a maioridade.")
            fimse
Fimalgoritmo