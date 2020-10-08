Algoritmo "DependentesFuncionario "
Var
// Seção de Declarações das variáveis 
nome: caractere
sal, nsal: real
dep: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva ("Qual nome do funcionário?")
   Leia (nome)
   Escreva ("Qual o salário do funcionário?")
   Leia (sal)
   Escreva ("Qual e a quantidade de dependentes?")
   Leia (dep)
        Escolha dep
                caso 0
                     nsal <- sal + (sal*5/100)
                caso 1, 2, 3
                     nsal <- sal + (sal*10/100)
                caso 4, 5, 6
                     nsal <- sal + (sal*15/100)
                outrocaso
                     nsal <- sal + (sal*18/100)
        Fimescolha
   Escreval ("O novo salário de ",nome, " sera de R$",nsal 5:2)
Fimalgoritmo