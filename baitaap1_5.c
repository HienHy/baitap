//the tich hinh tru
#include<stdio.h>
#include<math.h>
int main(){
	int height, radius; 
	float thetich;
	const float pi = 3.14;
	printf("enter height = ");
	scanf("%d", &height);
	printf("enter radius = ");
	scanf("%d", &radius);
	thetich = pi * pow(radius,2) * height;
	printf("the tich = %.2f", thetich);
	}
