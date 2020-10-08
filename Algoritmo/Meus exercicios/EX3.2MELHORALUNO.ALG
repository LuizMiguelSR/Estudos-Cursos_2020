Algoritmo "EX3.2MelhorAluno"
Var
n1, cont: inteiro
aluno, aluno2: caractere
nota, teste: real
Inicio
      Escreval ("Escola X")
      Escreva ("Quantos alunos tem: ")
      Leia (n1)
      cont <- 1
           enquanto (cont <= n1) faca
                    Escreval ("Aluno", cont)
                    Escreva ("Nome do aluno: ")
                    Leia (aluno)
                    Escreva ("Nota: ")
                    Leia (nota)
                    cont <- cont + 1
                         se (nota > teste) entao
                            teste <- nota
                            aluno2 <- aluno
                         fimse
           fimenquanto
       Escreva ("O aluno ",aluno2, " teve a melhor nota, que foi de: ", teste)
Fimalgoritmo