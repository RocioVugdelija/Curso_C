#ifndef VALIDACIONES_H_INCLUDE
#define VALIDACIONES_H_INCLUDE

int getIntn(int* pBuffer);
int getFloatn(float* pBuffer);
void getString(char msg[],char* pBuffer);
int getCaractern(char* pBuffer);
int getFloat(float *pFlotante, char* msg ,char* msgErr,int min);
int esNumericoFlotante(char str[]);
int esNumerico(char str[]);
int getEntero( int* pEntero, char* msg,char* msgErr,int min, int max);
int esSoloLetras(char str[]);
int getStringLetras(char* msg,char* msgErr,char* pBuffer);
int getCaracter(  char* pCaracter, char* msg,char* msgErr,char letraUno,char letraDos);
int getStringTelefono(char* msg,char* msgErr,char* pBuffer);
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int getStringAlfaNumerico(char* msg,char* msgErr,char* pBuffer);
int getEnteroEsc(  int* pEntero, char* msg,char* msgErr,int min, int max,int esc);
#endif // VALIDACIONES_H_INCLUDE
