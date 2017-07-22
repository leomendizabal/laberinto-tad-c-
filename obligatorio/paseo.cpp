#include "paseo.h"


void CargarPaseo(paseo &p,int nro_p,int pto_ent,int pto_sal,int cant_p)
{
    p.nro_paseo=nro_p;
    p.pto_entrada=pto_ent;
    p.pto_salida=pto_sal;
    p.cant_puntos=cant_p;
}

int DarNumero(paseo p)
{
   return p.nro_paseo;
}
int DarEntrada(paseo p)
{
  return p.pto_entrada;
}
int DarSalida(paseo p)
{
  return p.pto_salida;
}
int DarCantPuntos(paseo p)
{
   return p.cant_puntos;
}
void MostrarPaseo(paseo p)
{
  printf("Numero paseo   : %d \n",p.nro_paseo);
  printf("Punto entrada  : %d \n",p.pto_entrada);
  printf("Punto salida   : %d \n",p.pto_salida);
  printf("Cantidad puntos: %d \n",p.cant_puntos);

}
