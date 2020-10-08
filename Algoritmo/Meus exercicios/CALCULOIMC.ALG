Algoritmo "CalculoIMC"
Var
// Seção de Declarações das variáveis 
m, a, imc: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva("Massa (Kg): ")
   Leia(m)
   Escreva("Altura (m): ")
   Leia(a)
   imc <- m / (a ^ 2)
   Escreval("IMC: ", imc:5:2)
   se (imc >= 18.5) e (imc < 25) entao
      Escreva("Parabéns! Você está no peso ideal")
   senao
        se(imc >= 17) e (imc < 18.5) entao
               Escreva("Você está abaixo do peso!")
        senao
             se(imc >= 25) e (imc < 30) entao
                    Escreva("Você está com sobrepeso")
             senao
                  se(imc >= 30) e (imc < 35) entao
                         Escreva("Você está com obesidade")
                  senao
                       se(imc >= 35) e (imc < 40) entao
                              Escreva("Você tem obesidade severa")
                       senao
                            se(imc < 17) entao
                                   Escreva("Você está muito abaixo do peso")
                            senao
                                   Escreva("Você está com obesidade mórbida")
                            fimse
                       fimse
                  fimse
             fimse
        fimse
   fimse
Fimalgoritmo