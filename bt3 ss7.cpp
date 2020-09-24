#include <stdio.h>
int main (){
	int n,count;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ar[n];
	bool f=false;
	do{
		for(int i=0;i<n;i++){
			int x;
			printf("Nhap x: ");
			scanf("%d",&x);
			if(i==0){
				ar[i]=x;
			}else{
				
				for(int j=i;j>0;j--){
					count=0;
					f=false;
					if(ar[j-1] !=x){
						count++;
					}else{
						break;
					}
				}
				if(count==1){
					ar[i]=x;
				}else if(count==0){
					f=true;
				}
			}
		}
	}while(f);
	for(int i=0;i<n;i++){
		printf("%d\t",ar[i]);
	}
}
