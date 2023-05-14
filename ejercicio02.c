//ejercicio 02
//calcule el volumen de un cubo 
#include <stdio.h>
#include <math.h>

int main(){
	float aris, volume;
	printf("Introduzca la arista de un cubo");
	scanf("%g", &aris);
	volume = pow (aris, 3);
	printf("El volumen del cubo es " " %g", volume);
return 0;
}
