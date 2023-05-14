// Ejercicio 05: hora, minutos y segudos
#include <stdio.h>
int hh, mm, ss, total_seconds;
int main(){
    hh = mm = ss = -1;

	while (hh<0 || hh>24){        
	printf("Ingrese hora\n");
    scanf("%d",&hh);}

    while (mm<0 || mm>60){        
    printf("Ingrese minutos\n");
    scanf("%d",&mm);}

    while (ss<0 || ss>60){        
    printf("Ingrese segundos\n");
    scanf("%d",&ss);}
	total_seconds = hh*3600 + mm*60 + ss;
	printf("Los segundo transcurridos: %d", total_seconds);
return 0;
}
