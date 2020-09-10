#include<stdio.h>

int main(){
	
	int tuan ;
	printf("Nhap vao so nguyen : ");
	scanf("%d", &tuan);
	
	if(tuan >= 2 && tuan <= 7){
		printf("day la thu : %d" , tuan);
	}else if(tuan == 8){
		printf("day la chu nhat");
	}else{
		printf("khong phai ngay trong tuan");
	}
}
