#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,s=0;
	printf("Enter n=");scanf("%d",&n);
	i=1;
	while(i<=n){
		s=s+i; // 0=0+1 and 1 to s value=1
		printf("%d + \b",i); // \b is block + can not show
		i++;run
	}
	printf("\b = %d",s);
} 