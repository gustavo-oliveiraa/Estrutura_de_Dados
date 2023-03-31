# include <stdio.h>

int main(){
	
	int matriz[5][5];
	int i = 0, y = 0;
	
	for(i=0; i<5; i++){
		for(y=0; y<5; y++){
			printf("Digite os valores:\n");
			scanf("%d", &matriz[i][y]);
		}
	}
	
	for(i=0; i<5; i++){
		for(y=0; y<5; y++){
			printf("	%d	", matriz[i] [y]);
		}
		printf("\n");
	}
	
	
		
	return 0;
}
