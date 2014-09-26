#include<stdio.h>
#include<stdlib.h>
#include "libproy.h"
int main()
{
    int i,clCar,comp=1,des;
	char numCuenta[15],carreraEleg[40],sexo[1],edad[5],promedio[5],telefono[15];
	char carreras[5][40]={{"Ingenieria en Computacion"},{"Ingenieria Mecanica"},{"Ingenieria Civil"},{"Ingenieria Industrial"},{"Ingeniería Electrica y Electronica"}};
	char numCarreras[5][10]={{"110"},{"108"},{"107"},{"102"},{"104"}};
	char pNombre[25],rNombre[25],defNombre[25],apellidoM[20],apellidoP[20],mail[50],apellidoMS[20],apellidoPS[20],defApellidoM[20],defApellidoP[20];
	fflush(stdin);
    do
    {
        printf("\nIngrese Numero de Cuenta (9 digitos sin espacios,ni guion) ... ");
        gets(numCuenta);
        if(numCuen(numCuenta)==1)
            printf("\n\tNumero de cuenta no valido\n");
        else
            printf("\n\tNumero de cuenta valido\n");
        system("pause");
        system("cls");
    }
    while(numCuen(numCuenta) == 1 );
    do
    {
        printf("\nIngresa tu nombre\nsi tienes dos separalos con un  espacio  ... ");
        gets(pNombre);
        if(soloLetras(pNombre)==1)
        printf("\n\tSolo Letras y Espacios\n");
        else
            printf("\n\tDato valido\n");
        system("pause");
        system("cls");
    }
    while(soloLetras(pNombre) == 1);
    do
    {
        printf("\nIngresa tu apellido Paterno ... ");
        gets(apellidoP);
        if(soloLetras(apellidoP)==1)
            printf("\n\tsolo Letras y Espacios\n");
        else
            printf("\n\tDato valido\n");
        system("pause");
        system("cls");
    }
    while(soloLetras(apellidoP) == 1);
    do
    {
        printf("\nIngresa tu apellido Materno ... ");
        gets(apellidoM);
        if(soloLetras(apellidoM)==1)
            printf("\n\tsolo Letras y Espacios\n");
        else
            printf("\n\tDato valido\n");
        system("pause");
        system("cls");
    }
    while(soloLetras(apellidoM) == 1);
    do
    {
        printf("\n sexo (M o F) ... ");
        gets(sexo);
        if(soloLetrasS(sexo)==1)
            printf("\n\tMayusculas M o F\n");
        else
            printf("\n\tDato valido\n");
        system("pause");
        system("cls");
    }
    while(soloLetrasS(sexo)==1);
    do
    {
        printf("\nIngresa tu edad ... ");
        gets(edad);
        if(soloNumerosEd(edad)==1 || atof(edad)<=0.0)
            printf("\n\tDato no valido\n");
        else
            printf("\n\tDato valido\n");
        system("pause");
        system("cls");
    }
    while(soloNumerosEd(edad)==1 || atof(edad)<=0.0);
    do
    {
        printf("\nIngresa tu Promedio a 2 o un decimal ... ");
        gets(promedio);
        if(soloNumerosCal(promedio)==1 && atof(promedio)<10.00)
            printf("\n\tDato no valido\n");
        else
            printf("\n\tDato correcto\n");
        system("pause");
        system("cls");
    }
    while(soloNumerosCal(promedio)==1 && atof(promedio)<10.00);
    do
    {
        printf("\nIngresa tu telefono de casa a 8 dígitos sin espacios ni guiones ... ");
        gets(telefono);
        if(soloNumerosTel(telefono)==1)
            printf("\n\tDato incorrecto\n");
        else
            printf("\n\tDato correcto\n");
        system("pause");
        system("cls");
    }
    while(soloNumerosTel(telefono)==1);
    do
    {
        printf("\nIngresa tu e-mail\n");
        gets(mail);
        if( eMail(mail) == 1)
            printf("\n\te-mail no valido/ \n ");
        else
            printf("\n\te-mail valido\n");
        system("pause");
        system("cls");
    }
    while(eMail(mail) == 1 );
    do
    {
        printf("\nDel siguiente catálogo ingresa la clave de tu carrera\n");
        for(i=0; i<5 ;i++)
            printf("\t| %s  ---  %s |\n",numCarreras+i, carreras+i);
        printf("\n\n\t ... ");
        scanf("%d",&clCar);
        if(clCar != 110 || clCar != 107 ||clCar != 108 ||clCar != 102 || clCar != 104)
            comp = 0;
        else
            printf("\n\tclave de carrera inexistente\n");
        system("pause");
        system("cls");
    }
    while(comp == 1);
    sinEspaciosIaF(pNombre,rNombre);
    sinEspaciosIaF(apellidoP,apellidoPS);
    sinEspaciosIaF(apellidoM,apellidoMS);
    sinEspaciosInter(rNombre,defNombre);
    sinEspaciosInter(apellidoPS,defApellidoP);
    sinEspaciosInter(apellidoMS,defApellidoM);
    formatoNmb(defNombre);
    formatoNmb(defApellidoP);
    formatoNmb(defApellidoM);
    printf("\n\t numero de cuenta : |%s| \n\t Nombre :  |%s| |%s| |%s| \n",numCuenta,defNombre,defApellidoP,defApellidoM);
    printf("\n\t Edad : |%s| \n\t Sexo : |%s| \n",edad,sexo);
    printf("\n\t Promedio : |%s| \n",promedio);
    printf("\n\t Telefono : |%s| \n",telefono);
    printf("\n\t e-mail : |%s| \n",mail);
    printf("\n\t Carrera :   ");
    switch(clCar)
    {
        case 110:
        {
            printf(" clave %d  -- Ingenieria en Computacion\n",clCar);
        }
        break;
        case 108:
        {
            printf(" clave %d  -- Ingenieria Mecánica\n",clCar);
        }
        break;
        case 107:
        {
            printf(" clave %d  -- Ingenieria Civil\n",clCar);
        }
        break;
        case 102:
        {
            printf(" clave %d  -- Ingenieria en Industrial\n",clCar);
        }
        break;
        case 104:
        {
            printf(" clave %d  -- Ingeniería Electrica y Electronica\n",clCar);
        }
        break;
        default:
        break;
    }
    printf("\n ingresa un numero para salir\n");
    scanf("%d",&des);

        getchar();
        system("cls");
        system("pause");

	return 0;
}
