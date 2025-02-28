#include<stdio.h>
int main(){
	int a,b,min;
	printf("input a=");scanf("%d",&a);
	printf("input b=");scanf("%d",&b);
//		min=(a<=b)? a:b ;

	if(a<=b){
		min =a;
	}else{
		min =b;
	}
	printf("Min is =%d",min);
	
	
	
	
	
	
}