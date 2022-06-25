#include <stdio.h>
#include <stdlib.h>
void modificarMatriz(int n, int m, int mat1[n][m]){
	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			if(mat1[i][j]==1){
				mat1[i][j]=-1;}
		}
	}
}

int main(){
	int n, m;

		printf("ingrese n\n");
	scanf("%d", &n);
	printf("ingrese m\n ");
	scanf("%d", &m);
	int mat1[n][m];
	printf("ingrese los valores de la matriz\n");

	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
		
			scanf("%d", &mat1[i][j]);
		}
	}
	modificarMatriz(n,m,mat1);
	printf("la nueva matriz sera\n");
	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			printf(" %d ", mat1[i][j]);
		}
		printf("\n");
	}

return 0;
}
