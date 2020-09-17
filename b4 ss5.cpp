  
#include <stdio.h>
#include <cmath>
int main(){
	float a,b,c;
	do{
		printf("nhap a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
	}while((a+b<=c)&&(a+c<=b)&&(c+b<=a));
	float C,p,S;
	C=a+b+c;
	p=C/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi tam giac la:%0.2f\nDien tich tam giac la:%0.2f",C,S);
}
