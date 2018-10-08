#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char miToLower(char caracter);

int main()
{
     char x = 'a';

     x = miToLower(x);



    printf("%c\n\n", x);
    return 0;
}

char miToLower(char caracter){

    if( caracter >= 65 && caracter <= 90){
        caracter += 32;
    }

    return caracter;

}
