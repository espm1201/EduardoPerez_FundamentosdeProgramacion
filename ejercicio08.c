//Ejercicio 08: determinar numero mayor
#include <stdio.h>
int number1, number2, number3, mayor;
int main(){
	printf("Ingrese tres numeros enteros\n");
	scanf("%d %d %d", &number1, &number2, &number3);
	if (number1 > number2){
		mayor = number1;
	}else
		(mayor =number2);
	if (number3>mayor){
		mayor = number3;
	}
	printf("El numero  mayor es: %d", mayor);
	return 0;
}
