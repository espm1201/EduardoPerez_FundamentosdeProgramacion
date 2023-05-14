//algoritmo que calcule el promedio de tres examanes
#include <stdio.h>
int main(){
	float n1, n2, n3, average;
	printf("Introduzca la nota del primer examen ");
	scanf("%G", &n1);
	printf("Introduzca la nota del segundo examen ");
	scanf("%G", &n2);
	printf("Introduzca la nota del tercer examen ");
	scanf("%G", &n3);
	average = (n1 + n2 + n3) / 3;
	printf("El promedio es:%G", average);
return 0;
}

