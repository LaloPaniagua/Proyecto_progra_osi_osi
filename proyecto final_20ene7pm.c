#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
	{
		char player[70];
		int userValues[6],RNGValues[6],aciertos=0,i,j=0;
		srand(time(NULL));
		FILE *registros;
		registros=fopen("acmpy.txt","w+t");
		printf("Por favor ingrese un nombre de usuario y presione enter para continuar \n");
		scanf(" %[^\n]",&player);
		printf("\nBienvenid%c, Ingrese seis n%cmeros enteros entre 0 y 43\n",64,163);
		for(i=0;i<=5;i++)
			{
				printf("\nIngresa un n%cmero: ",163);
				scanf("%i",&userValues[i]);
				if (userValues[i] > 43|userValues[i] < 0)
				{
					printf("\n\nValor invalido, ingrese un n%cmero entero que este entre 0 y 43 : \n",163);
					scanf("%i",&userValues[i]);
				}
			}
		printf("\nTus numeros son: \n");
		for(i=0;i<=5;i++)
				printf("\n%i",userValues[i]);
		for(i=0;i<=5;i++)
				RNGValues[i]=rand()%44;
		printf("\n\nLos numeros seleccionados por la computadora son: \n");	
		for(i=0;i<=5;i++)
				printf("\n%i",RNGValues[i]);
		for(i=0;i<=5;i++)
			{
				if(userValues[i]==RNGValues[0]|userValues[i]==RNGValues[1]|userValues[i]==RNGValues[2]|userValues[i]==RNGValues[3]|userValues[i]==RNGValues[4]|userValues[i]==RNGValues[5])
					{
						printf("\n\nEl n%cmero %i, coincidio con un valor de la computadora \n",163,userValues[i]);
						aciertos=aciertos+1;
					}
			}
		printf("\n\nTuviste %i aciertos",aciertos);
		getchar();
		getchar();
		return 1;
	}
