#include <stdio.h>
#include <stdlib.h>
void ordenparcial(int *v1, int n, int cant){
	int aux;
	for(int i=0; i<cant; i++){
		for(int j=1+i; j<n; j++){	
			if(v1[i]< v1[j]){
				 aux= v1[i];
				v1[i] = v1[j];
				v1[j] = aux;
			}


	}
}
for(int i =0; i<cant; i++){
for(int j=i+1; j<cant; j++){
	if(v1[i]> v1[j]){
}
	 aux= v1[i];	
	v1[i]= v1[j];
	v1[j]=aux;
}
}
}


int main()
{
	int cant;
	int n;
		printf("ingrese un numero\n");
scanf("%d", &n);
printf("ingrese cant\n");
scanf("%d", &cant);
int v1[n];
printf("ingrese los valores del arreglo\n");
for (int i = 0; i < n; ++i)
{scanf("%d", &v1[i]);
}

	ordenparcial(v1,n,cant);
	printf("los numeros  ordenados de menor a mayor seran:\n");
	for(int i=0; i<cant; i++){
		printf("%d ", v1[i]);	
	}
	printf("\n");

return 0;
}

