#include<stdio.h>

int main (){

	int a,b,c,d,e;
	float salary,tax;

	printf("Enter a   :");scanf("%d",&a);
	printf("Enter b   :");scanf("%d",&b);
	printf("Enter c   :");scanf("%d",&c);
	printf("Enter d   :");scanf("%d",&d);
	printf("Enter e   :");scanf("%d",&e);
	salary = (a+b+c+d+e);
	if(salary <250 ){
		tax =salary*0.02;
	}
	else if(salary<500){
		tax = salary * 0.05;
	}
	else if(salary<1500){
		tax = salary * 0.09;
	}
	else if(salary > 1500){
		tax = salary * 0.15;
	}
	
	printf("A\tB\tC\tD\tE\tSalary\tTax\n");
	printf("%d\t%d\t%d\t%d\t%f\t%f",a,b,c,d,e,salary,tax);
	return 0;
}