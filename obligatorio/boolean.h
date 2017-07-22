#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED
#include <stdio.h>

typedef enum {FALSE,TRUE} Boolean;

//carga un valor booleano por teclado
void Cargar (Boolean &b);

//muestra un valor booleano por pantalla
void Mostrar (Boolean b);


#endif // BOOLEAN_H_INCLUDED
