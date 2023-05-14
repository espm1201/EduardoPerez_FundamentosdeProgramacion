//Ejercicio 05:intercambiar vallores de las variables
#include <stdio.h>
int v1,v2,aux;
int main(){
	printf("Asigne un numero a la primera variable");
	scanf("%d", &v1);
	printf("Asigne un numero a la segunda variable ");
	scanf("%d", &v2);
	aux = v2;
	v2 = v1;
	v1 = aux;
	printf("La primera variable es:%d", v1);
	printf("La segunda variable es:%d", v2);
	return 0;
}





	
	
	
