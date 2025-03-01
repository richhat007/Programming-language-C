#include<stdio.h>
int main(){
	double number;
	double sum =0;
	do{
		printf("Enter a number :");scanf("%f",&number);
		sum +=number;
		
	}while(number!=0.0);
	printf("Sum =%.2f",sum);
	return 0;
}