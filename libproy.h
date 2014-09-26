#ifndef LIBPROY_H_INCLUDED
#define LIBPROY_H_INCLUDED

int numCuen(char *cad)
{
    int i;
    if(longiCad(cad)>9)
        return 1;
    if(soloNumeros(cad)==1)
        return 1;
    return 0;
}
int soloNumeros(char *cad)
{
    int i;
    for(i=0; i<longiCad(cad) ; i++)
    {
        if(!(*(cad+i) > 47 && *(cad+i) <58))
        {
            return 1;
        }
    }
    return 0;
}

int longiCad(char *cad)
{
    int i,lon=0;
    for(i=0 ; *(cad+i) != '\0'; i++)
            {
                lon++;
            }
    return lon;
}
int soloLetras(char *cad)
	{
		int i=0;
		for(; *(cad+i)!='\0' ; i++)
			{
				if(!(*(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123 || *(cad+i) == 32 ))
				{
                    return 1;
				}
			}
		return 0;
	}

void sinEspaciosIaF(char *cad,char *cad1)
{
        int i,spc=0,spcf=0,lon=0;

        if(*(cad) == 32)
        {
            for(i=0 ; *(cad+i) != '\0'; i++)
            {
                if( *(cad+i) == 32)
                    spc++;
                if( *(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123)
                    break;
            }
            for(i=0 ;*(cad+i+spc) != '\0'  ; i++)
            {
                *(cad1+i) = *(cad+i+spc);
            }
             *(cad1+i) = '\0';
            for(i=0 ; *(cad1+i) != '\0'; i++)
            {
                lon++;
            }

            for(i=lon ; i!=0 ;i--)
            {
                if( *(cad1+i)>64 && *(cad1+i)<91 || *(cad1+i)>96 && *(cad1+i)<123)
                {
                    *(cad1+i+1) = '\0';
                    break;
                }
            }
        }
        else
        {
            for(i=0 ; *(cad+i) != '\0'; i++)
            {
                lon++;
            }
            for(i=0; *(cad+i)!='\0' ; i++)
                *(cad1+i) = *(cad+i);

            for(i=lon-1 ; i!=0 ;i--)
            {
                if( *(cad+i)>64 && *(cad+i)<91 || *(cad+i)>96 && *(cad+i)<123)
                {
                   *(cad1+i+1) = '\0';
                   break;
                }
            }
        }

}

void sinEspaciosInter(char *cad1,char *cad2)
{
   int j,interspc=0,i;
   for(i=0; *(cad1+i)!= '\0'; i++)
   {
       *(cad2+i)=*(cad1+i);
       if(*(cad1+i)== ' ')
       {
           j = i+1;
           if( *(cad1+j) == ' ')
           {
               for(; *(cad1+j)!= '\0'; j++)
               {
                   if( *(cad1+j)== ' ')
                    {
                       interspc++;
                    }
                   if( *(cad1+j)>64 && *(cad1+j)<91 || *(cad1+j)>96 && *(cad1+j)<123)
                        break;
                }
                for(;*(cad1+i+interspc) != '\0';i++)
                {
                    *(cad2+i)=*(cad1+i+interspc);
                }
                break;
           }
       }
   }
   *(cad2+i)='\0';
}

void formatoNmb(char *cad)
{
    int i,j;
    if(*(cad)<123 && *(cad)>96)
        *(cad)=*(cad)-32;
    for(i=1; *(cad+i) != '\0' ; i++)
    {
        if(*(cad+i) == 32)
        {
            i++;
            if(*(cad+i)<123 && *(cad+i)>96)
            {
                *(cad+i)= *(cad+i)-32;
                i=i+2;
            }
        }
        else
        {
            if(*(cad+i)<91 && *(cad+i)>64)
                *(cad+i)=*(cad+i)+32;
        }
    }
}

int soloNumerosEd(char *cad)
{
    int i;
    if(longiCad(cad) > 2)
        return 1;
    for(i=0; i<longiCad(cad) ; i++)
    {
        if(!(*(cad+i) > 47 && *(cad+i) <58))
        {
            return 1;
        }
    }
    return 0;
}

int soloLetrasS(char *cad)
	{
        if(!(*(cad)== 70 || *(cad) == 77 ))
        {
            return 1;
        }
		return 0;
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

int soloNumerosCal(char *cad)
{
    int i=0,pnts=0;
    if(*(cad+i) == '.')
            return 1;
    for(; *(cad+i) != '\0' ; i++)
    {
        if(!(*(cad+i) > 47 && *(cad+i) <58 || *(cad+i)== '.'))
            return 1;
        if(*(cad+i)=='.')
            pnts++;
    }
    *(cad+i)=='\0';
    if(pnts > 1)
        return 1;
    return 0;
}

int soloNumerosTel(char *cad)
{
    int i=0;
    if(longiCad(cad)!= 8)
        return 1;
    for(; *(cad+i) != '\0' ; i++)
    {
        if(!(*(cad+i) > 47 && *(cad+i) <58 ))
            return 1;
    }
    return 0;
}


#endif // LIBPROY_H_INCLUDED
