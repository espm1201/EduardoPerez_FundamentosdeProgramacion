#include <stdio.h>
int number1, number2, friend1, friend2;
int main (){
printf("Introduzca el primer numero:\n");
scanf("%d", &number1);
printf("Introduzca el segundo numero: ");
scanf("%d", &number2);
friend1 = 0;
friend2 = 0;
for (int i = 1; i<number1; i++){
	if (number1%i==0){
		friend2 = (friend2 + i);
	}
}
for (int j=1; j<number2;j++){
	if(number2%j==0){;
		friend1=(friend1+j);
	}
	
}
if((number1==friend2) && (number2==friend1)){
	printf("Los numeros %d y %d si son numeros amigos",number1,number2);
	printf("%d",friend1);
	printf("%d",friend2);
}
else{
	printf("Los numeros no son  amigos");
	printf("%d\n",friend1);
	printf("%d",friend2);
}

return 0;
}


	
	
		
	
