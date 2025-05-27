#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main() {
	
	char nome1[30], nome2[30], continuar;
	int tamanho_nome1 = 0, i = 0, tamanho_nome2 = 0;
	
	
	/* fun��es <string.h>
		strlen - tamanho
		stricmp - comparacao independe de maiuscula e minuscula
		strcmp - comparacao aonde 	
			0 � igual 
			< 0 string1 e menor que a string2
			0> string1 e maior que a string2
		strcpy - atribui��o  
		strcat - concatena��o
		
		fun��es ctype.h
		tolower - Converte um caractere maiusculo para minusculo.
		toupper - Converte um caractere min�sculo para mai�sculo.
	
	*/
	
	
	do{
		fflush(stdin);
		
		printf("Informe o primeiro nome: ");
		scanf("%[^\n]s",&nome1);
		
		fflush(stdin);
		
		printf("Infome o segundo nome: ");
		scanf("%[^\n]s",&nome2);
		
		tamanho_nome1 = strlen(nome1);
		tamanho_nome2 = strlen(nome2);
		
		//para eu conseguir fazer a convers�o de cada letra eu preciso acessar cada espa�o e eu fa�o isso usando o la�o de repeti��o
		
		for(i = 0; i < tamanho_nome1;i++){
			nome1[i] = toupper(nome1[i]); // atribuindo letra a letra para dentro da variavel necessaria o i relata o espa�o de cada variavel que vai ser armazenada
	
		}
		
		//para eu conseguir fazer a convers�o de cada letra eu preciso acessar cada espa�o e eu fa�o isso usando o la�o de repeti��o
		for(i = 0; i < tamanho_nome2;i++){
			nome2[i] = tolower(nome2[i]); //estou pegando a parte convertida e colocando dentro de uma variavel 
		}
		
		printf("%s \t %s\n",nome1,nome2);
	
	
		printf("Deseja Continuar ? ");
		scanf(" %c",&continuar);
			
	}while(continuar == 'S' || continuar == 's');
	
	
	return 0;
}
