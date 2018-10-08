#include <stdio.h>
#include <stdlib.h>
#include "get.h"

static int getIntn(int* pBuffer)
{
    return scanf("%d",pBuffer);
}
static float getFloatn(float* pBuffer)
{
    return scanf("%f",pBuffer);
}
static char getCaractern(char* pBuffer)
{
    return scanf("%c",pBuffer);
}
/*int getFloat(float *pFlotante, char* msg ,char* msgErr,int min, int max)
{

    int retorno=-1;
    float bufferFloat;
    if(pFlotante != NULL && msg != NULL && msgErr != NULL && min <= max)
    {
        do
        {
            system("cls");
            fflush(stdin);
            printf("%s",msg);
            if( (getFloatn(&bufferFloat) == 1) &&
                (bufferFloat >= min && bufferFloat <= max))
            {
                *pFlotante = bufferFloat;
                retorno = 0;
                break;
            }
            else
            {
                //fflush(stdin);//limpia en linux como fflush
                msg=msgErr;
            }
        }while(retorno!=0);

    }
    return retorno;
}


int getEntero(  int* pEntero, char* msg,
                    char* msgErr,int min, int max)

{
    int retorno=-1;
    int bufferInt;
    if(pEntero != NULL && msg != NULL && msgErr != NULL
        && min <= max )
    {
        do
        {
            fflush(stdin);
            printf("%s",msg);
            if( (getIntn(&bufferInt) == 1) &&
                (bufferInt >= min && bufferInt <= max))
            {
                *pEntero = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                fflush(stdin);//limpia en linux como fflush
                printf("%s",msgErr);
            }
        }while(reintentos>=0);

    }
    return retorno;
}

int getCaracter(  char* pCaracter, char* msg,char* msgErr)
{
    int retorno=-1;
    char bufferChar;
    if( msg != NULL && msgErr != NULL)
    {
        do
        {

            fflush(stdin);
            printf("%s",msg);
            if( (getCaractern(&bufferChar) == 1) &&
                (bufferChar >= letraUno && bufferChar <= letraDos))
            {

                *pCaracter = bufferChar;
                retorno = 0;
                break;
            }
            else
            {
               msg=msgErr;
            }
        }while(retorno!=0);

    }
    return retorno;
}

*/
