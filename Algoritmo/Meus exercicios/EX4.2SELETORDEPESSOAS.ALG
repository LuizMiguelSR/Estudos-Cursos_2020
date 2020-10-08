Algoritmo "EX4.2seletordepessoas"
Var
sx, co: caractere
i, cc, contf, contm: inteiro
Inicio
repita
      escreval ("----------------------")
      escreval ("  SELETOR DE PESSOAS  ")
      escreval ("----------------------")
      escreva ("Qual o sexo? [M/F] ")
      leia (sx)
      escreva ("Qual a idade? ")
      leia (i)
      escreval ("Qual a cor de cabelo? ")
      escreval ("----------------------")
      escreval ("[1] Preto")
      escreval ("[2] Castanho")
      escreval ("[3] Loiro")
      escreval ("[4] Ruivo")
      leia (cc)
      escreva ("Quer continuar? [S/N] ")
      leia (co)
           escolha cc
                   caso 2
                        se (i >= 18) entao
                           contm <- contm + 1
                        fimse
                   caso 3
                        se (i >= 25) e (i <= 30) entao
                           contf <- contf + 1
                        fimse
           fimescolha
      limpatela
ate (co = "n")
    escreval ("RESULTADO")
    escreval ("O total de homems com mais de 18 e cabelos castanhos é ",contm)
    escreval ("O total de mulheres entre 25 e 30 e cabelos loiros é ",contf)
Fimalgoritmo