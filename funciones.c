#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2){
    return sqrt(pow(x1-y1-z1,2)+pow(x2-y2-z2,2));
}

float calcularPerimetro(float puntos[4][3],float *d1, float *d2,float *d3,float *d4,float *d5,float *d6){
    *d1=calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2]);
    *d2=calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    *d3=calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    *d4=calcularDistancia(puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    *d5=calcularDistancia(puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    *d6=calcularDistancia(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    return *d1+*d2+*d3+*d4+*d5+*d6;
}

float calcularArea(float d1,float d2, float d3, float d4, float d5, float d6, float *base){
    float s1=(d1+d2+d4)/2;
    *base=sqrt(s1*(s1-d1)*(s1-d2)*(s1-d4));
    float s2=(d1+d5+d3)/2;
    float area2=sqrt(s2*(s2-d1)*(s2-d5)*(s2-d3));
    float s3=(d2+d3+d6)/2;
    float area3=sqrt(s3*(s3-d2)*(s3-d3)*(s3-d6));
    float s4=(d4+d5+d6)/2;
    float area4=sqrt(s4*(s4-d4)*(s4-d5)*(s4-d6));
    return *base+area2+area3+area4;
}   

float calcularVolumen(float puntos[4][3],float base){
    float x1=(puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
    float y1=(puntos[0][1]+puntos[1][1]+puntos[2][1])/3;
    float z1=(puntos[0][2]+puntos[1][2]+puntos[2][2])/3;
    float distancia=sqrt(pow(puntos[3][0]+x1,2)+pow(puntos[3][1]+y1,2)+pow(puntos[3][2]+z1,2));
    return base*distancia/3;
}