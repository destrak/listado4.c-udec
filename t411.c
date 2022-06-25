#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void estadistico(int n, double*v, double*min, double*max, double* devEs, double*prom, double*med){
	int i, j, aux;
	double suma=0;

	for(i=0; i<n; i++){
		for(j=1+i; j<n; j++){
			if(v[i]>v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
		}
	}
}
for(i=0; i<n; i++){
	suma+= v[i];

*min=v[0];
*max=v[n-1];
}
*prom= suma/n;
if(n%2==0){
	*med = (v[n/2]+v[n/2-1])/2;
}
else{
	*med = v[n/2];
}
double suma2=0;
for(i=0; i<n; i++){
	suma2 +=(v[i] - suma/n) * (v[i] - suma/n);

}
*devEs=sqrt(suma2/n);
}
int main(){
int n;
double min, max, devEs, prom, med;
printf("ingrese n\n");
scanf("%d", &n);
double v[n];
for(int i=0; i<n; i++){
	printf("ingrese los valores para %d\n", i+1);
	scanf("%lf", &v[i]);
}
estadistico(n, v, &min, &max, &devEs, &prom, &med);
printf("el menor es %lf\n", min);
printf("el mayor es %lf\n", max);
printf("el prom es %lf\n", prom);
printf("la mediana  es %lf\n", med);
printf("la desviacion estandar es %lf\n", devEs);


return 0;
}