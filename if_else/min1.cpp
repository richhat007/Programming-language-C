
#include<stdio.h>
int main(){
	int a,b,c,min;
	printf("input a=");scanf("%d",&a);
	printf("input b=");scanf("%d",&b);
	printf("input c=");scanf("%d",&c);
	
	if(a<=b){
		min=a;
	}
	if(a>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	printf("Min is =%d",min);
	return 0;
 }