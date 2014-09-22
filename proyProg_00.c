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
                if(*(cad+i+spc) != '\0' && *(cad+i+spc) != 32)
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

int eMail(char *cad)
{
	int i,punt=0;
    if( *(cad) == '@')
        return 1;
	for(i=0; *(cad+i) != '\0' ; i++)
	{
		if(*(cad+i) == ' ' || *(cad+i) == ':')
			{return 1;}
		if( *(cad+i) == '@')
		{
			i++;
			if( *(cad+i) == '.')
				{return 1;}
			for(; *(cad+i) != '\0' ; i++)
			{
				if(*(cad+i) == '.' )
				{
                    if( *(cad+i+1) == '\0')
                            return 1;
					punt++;
					if(punt > 2)
						{return 1;}
					if( *(cad+i+1) == '.' && *(cad+i+1) != '\0')
						{return 1;}
				}
			}
            if( punt == 0)
                    return 1;
			break;
		}

	}
	return 0;
}

int main()
{
	char numCuenta[9],des[2];
	char pNombre[25],apellidoM[15],apellidoP[15],mail[50];
	fflush(stdin);
	/*do
	{
		printf("\nIngrese Numero de Cuenta ... ");
		gets(numCuenta);
	}
	while(soloNumeros(numCuenta) == 1 );*/
	do
   	{
		printf("\nIngresa tu nombre\nsi tienes dos separalos con un  espacio  ... ");
		gets(pNombre);
	}
	while(soloLetras(pNombre) == 1);

	/*do
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
	do
	{
		printf("\nIngresa tu e-mail\n");
		gets(mail);
		if( eMail(mail) == 1)
		printf("\n email no valido, de nuevo , la regaste :/ \n ");
	}
	while(eMail(mail) == 1 );
    sinEspacios(pNombre);
    formatoNmb(pNombre);*/

        printf(" %s  --  |%s| |%s| |%s| ",numCuenta,pNombre,apellidoP,apellidoM);
        printf("\n |%s| ",mail);



	getchar();
	return 0;
}
