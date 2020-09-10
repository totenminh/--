  
#include<stdio.h>
#include<math.h>
#include <iostream>


int main(){
	
	int thang;
	printf("Nhap vao mot thang : ");
	scanf("%d", &thang);
	
	int ngay ;
	printf("Nhap vao mot ngay : ");
	scanf("%d", &ngay);
	int dem;
	
	if( thang <= 12 && thang > 0 &&  ngay <= 31 && ngay > 0){
	 if(thang == 1){
	    dem = ngay;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 2){
	    dem = ngay + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 3){
	    dem = ngay + 31 +28;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 4){
	    dem = ngay + 31 + 31 +28;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 5){
	    dem = ngay + 31 + 28 + 31+ 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 6){
	    dem = ngay + 31 + 28 + 31+ 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 7){
	    dem = ngay + 31 + 28 + 31+ 30 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 8){
	    dem = ngay + 31 + 28 + 31+ 30 + 31 + 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 9){
	    dem = ngay + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 10){
	    dem = ngay + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 11){
	    dem = ngay + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(thang == 12){
	     dem = ngay + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);
	}
	
	if(dem % 7 == 0){
		printf("\nday la ngay CN");
		}
	if(dem % 7 == 1){
		printf("\nday la ngay thu 2");
		}
	if(dem % 7 == 2){
		printf("\nday la ngay thu 3");
		}
	if(dem % 7 == 3){
		printf("\nday la ngay thu 4");
		}
	if(dem % 7 == 4){
		printf("\nday la ngay thu 5");
		}
	if(dem % 7 == 5){
		printf("\nday la ngay thu 6");
		}
	if(dem % 7 == 6){
		printf("\nday la ngay thu 7");
		}
	}
	else{
	    printf("Ban da nhap sai thong");
	}
	
}
