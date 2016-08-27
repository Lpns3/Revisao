#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//criaçao de variaveis
	int matriz [4][4], j=0, k=0;
	//busca numeros aleatorios
	srand ((unsigned) time (NULL));
	//imprime uma frase
	printf ("MATRIZ ORIGINAL: \n\n");
	//laço que varre a linha da matriz
	for (j=0; j<4; j++)
	{
		//laço que varre a coluna da matriz
		for (k=0;k<4;k++)
		{
			//insere um valor em determinada posiçao
			matriz[j][k]=k;
			//imprime a matriz
			printf ("%i \t", matriz [j][k]);
		}
		//quebra a linha da matriz a partir da 4 coluna
		printf ("\n");
	}
	//separa impreção da matriz completa da matriz identidade
	printf ("\n");
	//impreme o nome da matriz
	printf ("Matriz Identidade: \n\n");
	//lopp que varre a linha
	for (j=0; j<4; j++) 
	{
		//loop que varre a coluna
		for (k=0;k<4;k++)
		{
			//comparação para imprimir somente a identidade
			if (j==k)printf ("%i \t", matriz [j][k]);
		}
	}
	//separação da matriz identida da matriz sem identidade
	printf ("\n\n");
	//imprime o nome da matriz
	printf ("Matriz sem Identidade: \n\n");
	//loop varre linha
	for (j=0; j<4; j++) 
	{
		//loop varre coluna
		for (k=0;k<4;k++)
		{
			//imprime caso a coluna seja igual a linha
			if (j==k)printf ("- \t");
			//imprime caso a linha seja diferente da coluna
			else printf ("%i \t", matriz [j][k]);
		}
		//quebra a linha
		printf ("\n");
	}
	
	//retorna zero
	return 0;
}
