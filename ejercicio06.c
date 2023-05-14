// Ejercicio 06: conversion de $dolar a  euros
#include <stdio.h>
#define EURO 1.66
int dolar;
float euro_convert;
int main (){
	printf("Introduzca la cantidad de dolares a convertir: ");
	scanf("%u", &dolar);
	euro_convert = dolar * EURO;
	printf("La cantidad de euros es: %f",euro_convert);
	return 0;
}
	


