#ifndef PASEO_H_INCLUDED
#define PASEO_H_INCLUDED
#include <stdio.h>

typedef struct
               { int nro_paseo;
                 int pto_entrada;
                 int pto_salida;
                 int cant_puntos;
               } Paseo;

void CargarPaseo(Paseo &p,int pto_ent,int pto_sal,int cant_p);

int DarNumero(Paseo p);

int CargarNumero(Paseo &p, int nro);

int DarEntrada(Paseo p);

int DarSalida(Paseo p);

int DarCantPuntos(Paseo p);

void MostrarPaseo(Paseo p);

bool HaySalida(Paseo p);

#endif // PASEO_H_INCLUDED
