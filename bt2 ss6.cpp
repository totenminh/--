#include <stdio.h>
int main (){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arry[n];
	for( int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arry[i]);
		}
	int z=0;
	for(int i=0;i<n;i++){
		if(arry[i]>0){
			z+=arry[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arry[i]>0){
			if(arry[i]<z){
				z=arry[i];
			}
		}
	}
	printf("%d chinh la so duong be nhat ",z);
}
