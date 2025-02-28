#include<stdio.h>
int mani(){
	int a,b,c,min;
	printf("input a=");scanf("%d",&a);
	printf("input b=");scanf("%d",&b);
	printf("input c=");scanf("%d",&c);
	
	if(a<=b){
		min=a;
	}
	if(b<=c){
		min=b;
	}
	if(c<a<b){
		min=c;
	}
	printf("Min is =%d",min);
	return 0;
}