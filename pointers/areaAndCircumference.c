// Pragati Shelke 25070521108
#include<stdio.h>

void area_peri(float, float*, float*);

int main() {
	float r , area, peri;
	scanf("%f" , &r);
	area_peri(r ,&area,&peri);
	printf("%0.2f\n" , area);
	printf("%0.2f\n" , peri);


}

void area_peri(float r,float *area , float *peri) {
	*area = 3.14 * r * r;
	*peri = 3.14 * 2 * r;

}
