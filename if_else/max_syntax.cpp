#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("input a=");scanf("%d",&a);
	printf("input b=");scanf("%d",&b);
	printf("input c=");scanf("%d",&c);
	
	if(a>=b){
		max=a;
	}
	if(b<c){
		max=b;
	}
	if(max<c){
		max=c;
	}
	printf("karona is =%d",max);
	return 0;
}