#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//cria�ao de variaveis
	int matriz [4][4], j=0, k=0;
	//busca numeros aleatorios
	srand ((unsigned) time (NULL));
	//imprime uma frase
	printf ("MATRIZ ORIGINAL: \n\n");
	//la�o que varre a linha da matriz
	for (j=0; j<4; j++)
	{
		//la�o que varre a coluna da matriz
		for (k=0;k<4;k++)
		{
			//insere um valor em determinada posi�ao
			matriz[j][k]=rand ()%50;
			//imprime a matriz
			printf ("%i \t", matriz [j][k]);
		}
		//quebra a linha da matriz a partir da 4 coluna
		printf ("\n\n");
	}
	//retorna zero
	return 0;
}
