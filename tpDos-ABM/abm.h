#ifndef ABM_H_INCLUDE
#define ABM_H_INCLUDE

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;
void init(Employee* empleado,int cantidad);
int addEmployee(Employee empleado[],int cantidad);
void printEmployee(Employee* empleado,int i);
int findEmployeeById(Employee* empleado, int cantidad,int id);
void modificationEmployee(Employee* empleado,int posID);
void removeEmployee(Employee* empleado,int posID);
void sortEmployees(Employee empleado[], int cantidad ,int order);
int validRamdonNumber(Employee empleado[],int cantidad);
int getNumeroAleatorio(int desde , int hasta);
int obtenerEspacioLibre(Employee empleado[] , int cantidad);
int esSoloLetras(char str[]);
int getStringLetras(char* msg,char* msgErr,char* pBuffer);
void getString(char msg[],char* pBuffer);
int getFloat(float *pFlotante, char* msg ,char* msgErr,int min);
int esNumerico(char str[]);
int getFloatn(float* pBuffer);
int getEntero(  int* pEntero, char* msg,char* msgErr,int min, int max);
int getInt(int* pBuffer);
int getCaracter(  char* pCaracter, char* msg,char* msgErr,char letraUno,char letraDos);
int getCaractern(char* pBuffer);
int menu();
int menuDos();
#endif // ABM_H_INCLUDE
