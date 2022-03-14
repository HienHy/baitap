//dien tich va chu vi hinh tron
#include<stdio.h>
#include<math.h>
int main(){
	float s, c;
	int r;
	const float pi = 3.14;
	printf("nhap ban kinh r = ");
	scanf("%d", &r);
	s = pow(r,2) * pi;
	printf("dien tich = %.2f", s);
	c = (r*2) * pi;
	printf(" chu vi = %.2f", c);
	}
