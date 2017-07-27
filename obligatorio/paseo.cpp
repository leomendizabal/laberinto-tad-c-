#include "paseo.h"


void CargarPaseo(Paseo &p,int pto_ent,int pto_sal,int cant_p)
{
    p.pto_entrada=pto_ent;
    p.pto_salida=pto_sal;
    p.cant_puntos=cant_p;
}

int DarNumero(Paseo p)
{
   return p.nro_paseo;
}

int CargarNumero(Paseo &p, int nro){
    p.nro_paseo = nro;
}

int DarEntrada(Paseo p)
{
  return p.pto_entrada;
}
int DarSalida(Paseo p)
{
  return p.pto_salida;
}
int DarCantPuntos(Paseo p)
{
   return p.cant_puntos;
}
void MostrarPaseo(Paseo p)
{
  printf("Numero paseo   : %d \n",p.nro_paseo);
  printf("Punto entrada  : %d \n",p.pto_entrada);
  printf("Punto salida   : %d \n",p.pto_salida);
  printf("Cantidad puntos: %d \n",p.cant_puntos);

}

bool HaySalida(Paseo p){
    return p.cant_puntos != -1;
}
