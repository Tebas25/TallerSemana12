#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    float puntos[4][3]={{0,0,0},{0,0,3},{3,0,0},{1,7,1}};
    float d1,d2,d3,d4,d5,d6,areabase;
    
    float perimetro=calcularPerimetro(puntos,&d1,&d2,&d3,&d4,&d5,&d6);
    float AreaSuperficial=calcularArea(d1,d2,d3,d4,d5,d6,&areabase);
    float volumen=calcularVolumen(puntos,areabase); //area de la base por la altura dividido para 3
    
    printf("El perimetro de la piramide es: %.2f\n",perimetro);
    printf("El area superficial de la piramide es: %.2f\n",AreaSuperficial);
    printf("El volumen de la piramide es: %.2f\n", volumen);
    return 0;
}