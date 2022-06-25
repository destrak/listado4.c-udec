#include <stdio.h>
#include <stdlib.h>
int longitudPalabraMasLarga(int n, char crucigrama[n][n]){
	int i,j, auxiliar=0;
	int palabrafinal=0, palabraactual=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(crucigrama[i][j]!='-'){
			palabraactual++;}
			auxiliar=palabraactual;
			 if(crucigrama[i][j]=='-'  || j ==n-1){
				palabraactual=0;
			}
		if(auxiliar> palabrafinal){
				palabrafinal=auxiliar;}
	
	}
}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(crucigrama[j][i]!='-'){
			palabraactual++;}
			auxiliar=palabraactual;
			 if(crucigrama[j][i]=='-'  || j ==n-1){
				palabraactual=0;
			}
		if(auxiliar> palabrafinal){
				palabrafinal=auxiliar;}
	
	}
}


return palabrafinal;
}
int main(int argc, char const *argv[])
{
	int n;
	int j,i;
	printf("ingresea n\n");
	scanf("%d", &n);
	char crucigrama[n][n];
	int palabrafinal;
	printf("ingresa las letras de cada matriz\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf(" %c", &crucigrama[i][j]);
		}
	}
palabrafinal= longitudPalabraMasLarga(n,crucigrama);
printf("la palabra mas grande es");
			printf(" %d \n", palabrafinal);

	return 0;
}