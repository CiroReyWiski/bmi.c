#include <stdio.h>

int main() {
	float peso, altura, IMC;
	
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	
	printf("\nIngrese su altura en metros: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %f\n", IMC);
	
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("    >=30      |  Obesidad\n\n\n");
	
	printf("Su condicion es:  ");
	if (IMC<=18.5){
		printf("Bajo peso\n\n");
	}
	else if (IMC<=24.9){
		printf("Normal\n\n");
	
	}
	else if (IMC<=29.9){
		printf("Sobrepeso\n\n");
	}
	else {
		printf("Obesisdad\n\n");
	}
	return 0;
}

