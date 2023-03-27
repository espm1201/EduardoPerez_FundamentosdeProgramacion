#include <stdio.h>
int main(){
	int n,m,mmax,count_5,count_3,invert;
	printf("Ingrese la cantidad de numeros que desea evaluar\n");
	scanf("%d", &n);
	count_5=0;
	count_3=0;
	for(int i=1;i<=n;i++){
		printf("Ingresa el numero a evaluar:\n");
		scanf("%d", &m);
		mmax=m;
		invert=0;
		if(m>100){
			do{
				invert=(invert+(m%10))*10;
				if((m%10)==5){
					count_5++;
				}
				if((m%10)==3){
					count_3++;
				}
				m=(m%10);
				if(invert>mmax){
					invert=(invert/10);
				}
			}while (m!=0);
			printf("El numero invertido es:%d \n ", invert);
		}
		if((m<100)&&(m>10)){
			do{
				if((m%10)==5){
					count_5++;
				}
				if((m%10)==3){
					count_3++;
				}
				m=(m%10);
			}while(m!=0);
		}
	}
	printf("Numeros de 3 encontrados:%d \n Numeros de 5 encontrados: %d \n", count_3, count_5);
	return 0;
}

	
	

		
		
		
	

				
				
		
				
		

		


	
