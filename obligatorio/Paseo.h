#ifndef PASEO_H_INCLUDED
#define PASEO_H_INCLUDED
#include <stdio.h>

typedef struct
               { int nro_paseo;
                 int pto_entrada;
                 int pto_salida;
                 int cant_puntos;
               } paseo;


void CargarPaseo(paseo &p,int nro_p,int pto_ent,int pto_sal,int cant_p);

int DarNumero(paseo p);

int DarEntrada(paseo p);

int DarSalida(paseo p);

int DarCantPuntos(paseo p);


#endif // PASEO_H_INCLUDED
