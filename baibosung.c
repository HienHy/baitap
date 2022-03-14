// quy doi ty gia
#include<stdio.h>
int main(){
	float dola, vnd;
	char phuongthuc;
	float tygia;
	printf("nhap ty gia cua ngay hom nay = ");
	scanf("%f", &tygia);
	printf("nhap phuong thuc muon quy doi\n");
	printf("dola sang vnd vui long nhan phim m\n");
	printf("vnd sang dola vui long nhan phim h\n");
	fflush(stdin);
	scanf("%c", &phuongthuc);
	if(phuongthuc == 'm'){
		printf("nhap so dola muon doi=");
		scanf("%f", &dola);
	  	vnd = dola * tygia;
		printf("so tien ban nhan duoc la = %.2fvnd", vnd);}
		else if (phuongthuc == 'h'){
			printf("nhap so vnd muon doi =");
			scanf("%f", &vnd);
	        dola = vnd / tygia;
	        printf("so tien ban nhan duoc la = %.2fusd", dola);}
		}
