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
	int z=0,tong=0;
	for(int i=0;i<n;i++){
		if(arry[i]>0){
			z+=arry[i];
			if(z>tong){
				tong=z;
			}
		}else{
			z=0;
		}
	}
	printf("Tong lon nhat cua chuoi so duong la: %d",tong);
}
