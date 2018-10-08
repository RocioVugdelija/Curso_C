#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nombre[20];

    printf("Ingrese nombre:");

    fgets(nombre, 20, stdin);

    nombre[strlen(nombre)-1]='\0';

    puts(nombre);


    printf("cantidad: %d", strlen(nombre));

    /*strcpy(nombre, "Juana de Arco");
    char apellido[20] = "PEREZ";
    char nombreCompleto[40];
    strlwr(apellido);
    strncpy(nombreCompleto, nombre, 10);
    puts(nombreCompleto);
   // printf("Ingrese un nombre: ");
   // gets(cadena);

   //strcpy(cadena, "Jose");

    //strcpy(cadena, cadena2);
   /* int comparacion;

    comparacion =  stricmp(cadena, "mariana");

    int largo = strlen(cadena);


    //strlwr(cadena);
    strcat(cadena, " ");
    strcat(cadena, cadena2);


    printf("%s\n", nombreCompleto);*/
    return 0;
}
