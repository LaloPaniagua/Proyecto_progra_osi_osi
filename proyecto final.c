#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
	{
		char player[70];
		int userValues[6],RNGValues[6],aciertos=0,i;
		srand(time(NULL));
		FILE *registros;
		registros=fopen("acmpy.txt","w+t");
		printf("Bienvenid%c, por favor ingrese un nombre de usuario y presione enter para continuar \n",64);
		scanf(" %[^\n]",&player);
		printf("Ingrese seis n%cmeros enteros entre 0 y 43 separados por comas \n",163);
		scanf( "%i,%i,%i,%i,%i,%i",&userValues[0],&userValues[1],&userValues[2],&userValues[3],&userValues[4],&userValues[5]);
		printf( "Has tecleado los n%cmeros %i, %i, %i, %i, %i, %i\n",163, userValues[0], userValues[1],userValues[2],userValues[3],userValues[4],userValues[5]);
		for(i=0;i<=5;i++)
			{
				RNGValues[i]=rand()%44;
			}
		printf( "Los n%cmeros generados por la computadora son: %i, %i, %i, %i, %i, %i\n",163, RNGValues[0], RNGValues[1],RNGValues[2],RNGValues[3],RNGValues[4],RNGValues[5]);
		for(i=0;i<=5;i++)
			{
				if(userValues[i]==RNGValues[0]|userValues[i]==RNGValues[1]|userValues[i]==RNGValues[2]|userValues[i]==RNGValues[3]|userValues[i]==RNGValues[4]|userValues[i]==RNGValues[5])
					{
						aciertos=aciertos+1;
					}
			}
		printf("N%cmero de aciertos: %i",163,aciertos);
		fprintf(registros,"Usuario: %s \nValores ingresados: %i,%i,%i,%i,%i,%i \nValores generados por la computadora: %i,%i,%i,%i,%i,%i \nAciertos obtenidos: %i",player,userValues[0],userValues[1],userValues[2],userValues[3],userValues[4],userValues[5],RNGValues[0], RNGValues[1],RNGValues[2],RNGValues[3],RNGValues[4],RNGValues[5],aciertos);
		fclose(registros);
		getchar();
		getchar();
		return 1;
		
	}
