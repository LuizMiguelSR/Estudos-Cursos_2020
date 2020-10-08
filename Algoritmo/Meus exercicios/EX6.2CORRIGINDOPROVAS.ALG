Algoritmo "EX6.2CorrigindoProvas"
Var
n1: vetor[1..5] de caractere
n2: vetor[1..5] de caractere
nome: vetor[1..3] de caractere
g, alu, res: inteiro
Inicio
      escreval ("Passo 01 Cadastro do gabarito")
      para g <- 1 ate 5 faca
           escreva ("Questão",g,":")
           leia (n1[g])
      fimpara
      limpatela
      para alu <- 1 ate 3 faca
           escreval ("-----------------")
           escreval ("ALUNO ",alu)
           escreval ("-----------------")
           escreva ("Nome: ")
           leia (nome[alu])
           escreval ("RESPOSTAS DADAS")
           para res <- 1 ate 5 faca
                escreva ("Questão ",res,":")
                leia (n2[res])
           fimpara
           limpatela
      fimpara

Fimalgoritmo