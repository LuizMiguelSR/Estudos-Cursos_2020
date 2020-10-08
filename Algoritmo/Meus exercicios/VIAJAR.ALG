Algoritmo "Viajar"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Curso em video
// Descrição   : Teste viagem
// Autor(a)    : Luiz Miguel Santos Rodrigues
// Data atual  : 26/08/2020
Var
// Seção de Declarações das variáveis 
n1:inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreval("Quanto dinheiro eu tenho? ")
   Leia(n1)
           se (n1 >= 10000) então
              Escreval("Partiu Dysney!")
              senao
                   se (n1 >= 5000) e (n1 < 10000) então
                      Escreval("Visitar família")
              senao
                   Escreva("#Chateado")
                   fimse
           fimse
Fimalgoritmo