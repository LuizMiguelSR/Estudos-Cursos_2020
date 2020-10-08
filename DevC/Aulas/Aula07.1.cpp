#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"portuguese");
    int dia;
    printf("\nDOM=1\tSEG=2\tTER=3\tQUA=4\tQUI=5\tSEX=6\tSAB=7\tNÂO SABER=0");
    printf("\nDigite o dia da semana em que você vai começar as atividades: ");
    scanf("%i",&dia);
    switch(dia)
    {
    	case 0: //cada case segue de dois pontos
    		printf("\nSe informe com seu superior o dia que vai a começar as atividades");
    	break; //para o comando e sempre usa ponto e vírgula
    	case 1:
    		printf("\nVocê trabalha domingo");
    	case 2:
    		printf("\nVocê trabalha segunda");
    	case 3:
    		printf("\nVocê trabalha terça");
    	case 4:
    		printf("\nVocê trabalha quarta");
    	case 5:
    		printf("\nVocê trabalha quinta");
    	case 6:
    		printf("\nVocê trabalha sexta");
    	case 7:
    		printf("\nVocê trabalha sábado");
    	break;
    	default: // cai nesta opção quando nenhum dos casos forem mencionados
    		printf("\nValor invalido digite um número referente aos dias da semana ou 0 para caso não saiba");
    	break;
	}
getchar();
printf("\n\n");
system("pause");
return(0);    
}
