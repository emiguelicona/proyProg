#include<stdio.h>
#include<stdlib.h>
int soloNumeros(char *cad)
         {
                 int i;
                for(i=0; i<9 ; i++)                 {       
                         if(!(*(cad+i) > 47 && *(cad+i) <58))
				{
					printf("\n La regaste ... ingresa correctamente tu numero de cuenta\n");
                                	 return 1;
				}
                 }
           	printf("\nNo de Cuenta Correcto\n");	
                return 0;
          }

int soloLetras(char *cad)
	{	
		int i=0;
		for(; *(cad+i)!='\0' ; i++)
			{
				if(!(*(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123 ))
				{
                                        printf("\n La regaste ... ingresa correctamente el dato\n");
                                         return 1;

				}
			}	
		printf("\nDato correcto\n");
		return 0;
	}

int main()
{
	char numCuenta[9],nme;
	char nombre1[10],nombre2[10],apellidoM[10],apellidoP[10];
	fflush(stdin);
	do
	{
		printf("\nIngrese Numero de Cuenta ... ");
		gets(numCuenta);
	}
	while(soloNumeros(numCuenta) == 1 );
	printf("\nTienes dos nombres?  0 -si  1 no ...");
	getc(nme);
	do
	{
		printf("\nIngresa tu primer nombre ... ");
		gets(nombre1);
	}
	while(soloLetras(nombre1) == 1);
	
	if(nme == 0)
	{
		do
		{
			printf("\nIngresa tu segundo nombre ... ");
			gets(nombre2);
		}
		while(soloLetras(nombre2) == 1);
	}	
	do
	{
		printf("\nIngresa tu apellido materno");
		gets(apellidoM);
	}
	while(soloLetras(apellidoM) == 1);
	do
        {
                printf("\nIngresa tu apellido paterno");
                gets(apellidoP);
        }
        while(soloLetras(apellidoP) == 1);

	

	getchar();
	return 0;
}
