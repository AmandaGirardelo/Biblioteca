//Bibliotecas Padr�o
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
//Final Bibliotecas Padr�o

//Minhas Bibliotecas
#include "Cadastro.h"

int main () {
    //Definir linguagem para portugues
    setlocale(LC_ALL, "portuguese");

    //Declara��o de variaveis
	int verific_inicial;
	char verifica_saida;
	char entrada;
	
	//altera o valor para o funcionamento do "DO WHILE"
	verific_inicial = 1;
	
	do{
		menu_principal();
		entrada = getch();
		
		switch(entrada){
			case '1' : 
				printf("\033[H\033[2J");//Limpa o terminal
				printf("\nEm Desenvolvimento"); // Consulta de livros
				printf("\nAqui voc� poder� consultar livros");
				printf("\nAperte 'x' para sair");
				printf("\n");
				 
				verifica_saida = getch();
				
				if (verifica_saida == 'x'){
					
					printf("\033[H\033[2J");
					break;	
				}
					

			case '2' : 
				printf("\033[H\033[2J");
				printf("\nEm Desenvolvimento"); // Emprestimo de Livro
				printf("\nAqui voc� poder� emprestar livros");
				printf("\nAperte 'x' para sair");
				printf("\n");
				 
				verifica_saida = getch();
				
				if (verifica_saida == 'x'){
					
					printf("\033[H\033[2J");
					break;	
				}
				
			case '3' : 
				printf("\033[H\033[2J");
				cadastro();
				printf("\033[H\033[2J");
				
				break;	
				
			case (char)27 : //Saida do programa
				verific_inicial = 0;
				break;
				
			default :
				printf ("\n		Op��o invalida				");
				printf ("\n	Esolha outra op��o para continuar	");	
				printf ("\n\n")	;
			}
			
	}while (verific_inicial != 0);

    return 0;
}
