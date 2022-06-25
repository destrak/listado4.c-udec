//solucion propia
#include <stdio.h>
#include <stdlib.h>
int buscar(int n, double *v, double e){
	double a = 0.000001;
	int i, j=0;
	double aux=0;
	for( i=0; i <n; i++){
		if(v[i]<=e){
			v[j]=e-v[i];
			j++;
		}
		else if((e<=v[i])){
			v[j]=v[i]-e;
			j++;
		}
	}
for(j=0; j<n; j++){		
		if(v[j]<a);{
		
	}
return j;
}

	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	printf("ingrese n\n");
	scanf("%d", &n);
	double v[n];
	double e;
	printf("ingrese el valor de error\n");
	scanf("%lf", &e);
	int a, i,j;
	for( i=0; i<n; i++){
		printf("ingrese los elementos del arreglo  %d:\n", i);
		scanf("%lf", &v[i]);
	}
	int m;
	m=buscar(n,v,e);
	for(j=0; j<n; j++){		
	printf("%lf\n", v[j]);
}
printf("en la posicion que se encuentra es %d\n", m);

	return 0;
}
