#include <stdio.h>
int multiplica(int num1, int num2);

int main(){
	int x,y,resultado;
	
	printf("Escribe un numero: ");
	scanf("%i",&x);
	
	printf("Escribe otro numero: ");
	scanf("%i", &y);
	
	resultado=multiplica(x,y);
	printf("El resultado es: %i",resultado);
	
	
	
	return 0;
}

int multiplica(int num1, int num2){
	int i;
	int suma=0;
	for(i=1;i<=num2;i++)
	{suma=suma + num1;
	}
	return(suma);
}
	
	
	
	
	
	
	
	
