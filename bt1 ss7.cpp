#include <stdio.h>
int main (){
	
	int arr[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("Nhap arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Ma tran ban dau la:\n");
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 3; j++){
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran chuyen vi la:\n");
	int arry[3][2];
	for(int j = 0; j < 3; j++){
		for(int i = 0; i < 2; i++){
			arry[j][i]=arr[i][j];
			printf("\t%d",arry[j][i]);
		}
		printf("\n");
	}
	}
