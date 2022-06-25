//solucion propia lo intente hacer manual pero nunca me daba asi que use fabs para omitir el caso negativo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int buscar(int n, double *v, double e){
	double a=0.000001;
	int i;
	int j;
	int aux=0, aux2;
	for( i=0; i <n; i++){
		if(fabs(v[i]-e)<a){
			return i;
		}
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
printf("en la posicion que se encuentra en el arreglo numero %d\n", m);

	return 0;
}
