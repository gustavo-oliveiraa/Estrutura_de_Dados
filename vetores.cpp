# include <stdio.h>

# define TAM 10

int main(){
	
	int numeros[TAM], i, y = 0, j = 0;
	int par[TAM], impar[TAM];
	
	printf("Digite %d numeros:\n", TAM);
	for(i = 0; i < TAM; i++){
		scanf("%d", &numeros[i]);
	}
	
	for(i = 0; i < TAM; i++){
		if(numeros[i] % 2 == 0){
			par[y] = numeros[i];
			y++;
		} else{
			impar[j] = numeros[i];
			j++;
		}
	}
	
	printf("O numeros pares digitados foram:\n");
	for(i = 0; i < y; i++){
		printf("%d\n", par[i]);
	}
	
	printf("O numeros impares digitados foram:\n");
	for(i = 0; i < j; i++){
		printf("%d\n", impar[i]);
	}
	
	
}
