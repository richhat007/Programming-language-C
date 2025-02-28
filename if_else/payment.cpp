#include<stdio.h>

//#include<stdlib.h>
int main(){
	
	float payment,total,discount=0;
	int qty;
	char name[50];
	float price;
	printf("\n===========================================\n");
    printf("                Input Product\n");
    printf("===========================================\n");
	printf("Input Name  =");gets(name);
	printf("Input Qty   =");scanf("%d",&qty);
	printf("Input Price =");scanf("%f",&price);
	
	total = qty * price;
	
	
	if (total <= 1400) {
        discount = total * 0.05;
    } 
    else if (total >= 1299 && total <= 1398) {
        discount = total * 0.04;
    } 
    else if (total >= 1000 && total <= 1298) {
        discount = total * 0.03;
    } y
    else if (total <= 899) {
        discount = total * 0.02;
	}
	
	payment = total - discount;
	
	printf("\n===========================================\n");
    printf("                Invoice\n");
    printf("===========================================\n");
    printf("Name       : %s\n", name);
    printf("Quantity   : %d\n", qty);
    printf("Price      : %.2f $\n", price);
    printf("-------------------------------------------\n");
    printf("Total      : %.2f $\n", total);
    printf("Discount   : %.2f $\n", discount);
    printf("Payment    : %.2f $\n", payment);
    printf("===========================================\n");
	printf("Thank you for order....");
	
	return 0;
	
}