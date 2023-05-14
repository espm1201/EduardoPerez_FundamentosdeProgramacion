//Ejercicio 03: kilos de azucar y cafe
#include <stdio.h>
#define SUGAR 3.00
#define COFFEE 0.72
float money, sugar_kg, coffee_kg, excess;
int main(){
	printf("Ingrese la cantidad de euros a operar:");
	scanf("%f", &money);
	sugar_kg = (money/2)/SUGAR;
	coffee_kg = ((money/3)/COFFEE);
	excess = money - ((money / 2) + (money/3));
	printf("Kilos de azucar total %g\n", sugar_kg);
	printf("Kilos de cafe total: %g\n", coffee_kg);
	printf("El excedente es: %g\n", excess);
return 0;
}
	
