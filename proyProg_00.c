#include<stdio.h>
#include<stdlib.h>
int soloNumeros(char *cad)
         {
                 int i;
                for(i=0; i<9 ; i++)
                    {
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
				if(!(*(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123 || *(cad+i) == 32 ))
				{
                                        printf("\n La regaste ... ingresa correctamente el dato\n");
                                         return 1;

				}
			}
		printf("\nDato correcto\n");
		return 0;
	}

void sinEspacios(char *cad)
{
        int i,spc=0;
        if(*(cad) == 32)
        {
            for(i=0 ; *(cad+i) != '\0'; i++)
            {
                if( *(cad+i) == 32)
                    spc++;
                if( *(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123)
                    break;
            }
            for(i=0 ; *(cad+i) != '\0'; i++)
            {
                if(*(cad+i+spc) != '\0' || *(cad+i+spc) != 32)
                *(cad+i) = *(cad+i+spc);
                else
                 *(cad+i) = '\0';
            }
        }
}

void formatoNmb(char *cad)
{
    int i;
    if(*(cad)<123 && *(cad)>96)
        *(cad)=*(cad)-32;
    for(i=1; *(cad+i) != '\0' ; i++)
    {
        if(*(cad+i)<91 && *(cad+i)>64)
        *(cad+i)=*(cad+i)+32;
    }
}


int main()
{
	char numCuenta[9],des[2];
	char pNombre[20],apellidoM[10],apellidoP[10];
	fflush(stdin);
	do
	{
		printf("\nIngrese Numero de Cuenta ... ");
		gets(numCuenta);
	}
	while(soloNumeros(numCuenta) == 1 );
	do
    {
		printf("\nIngresa tu nombre\nsi tienes dos separalos con un  _  ... ");
		gets(pNombre);
	}
	while(soloLetras(pNombre) == 1);

	do
	{
		printf("\nIngresa tu apellido Paterno ... ");
		gets(apellidoP);
	}
	while(soloLetras(apellidoP) == 1);
	do
        {
                printf("\nIngresa tu apellido Materno ... ");
                gets(apellidoM);
        }
    while(soloLetras(apellidoM) == 1);
    sinEspacios(pNombre);
    formatoNmb(pNombre);

        printf(" %s  --  |%s| |%s| |%s| ",numCuenta,pNombre,apellidoP,apellidoM);



	getchar();
	return 0;
}
