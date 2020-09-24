#include <stdio.h>
int main (){
	int n,count;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		int x;
		printf("Nhap x: ");
		scanf("%d",&x);
		ar[i]=x;
		int j=i-1;
		int thao =ar[i];
		while(j>=0&&thao< ar[j]){
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=thao;
	}
	printf("Mang sau khi sap xep:\n");
	for( int i=0;i<n;i++){
		printf("%4d",ar[i]);
	}
}

