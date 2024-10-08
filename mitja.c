#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("Dòna la següent dada: nouri25");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar nouri25 (s/n): ");
		scanf(" %s",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("La mitja és nouri25: %.2f\n",mitja);	
	return 0;
}

