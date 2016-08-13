#include <stdio.h>

void main ()
{
	int valor=0;
	unsigned int i=0;
	
	printf ("Entre com o valor para ser fatorado: ");
	scanf ("%i", &valor);
	
	for (i=1;valor>1;valor--)
	{
		printf ("%i * %i\n", valor, i);
		i = i * valor;
		printf (" Resultado = %i \n", i);
	}
	
	printf ("Valor : %i", i);
}
