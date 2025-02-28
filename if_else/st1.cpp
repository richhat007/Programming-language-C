#include<stdio.h>

#include<stdlib.h>

int main(){
//	total = entime - starttime;
	int st,et,total;
	
	
	printf("Enter ST  :");scanf("%d",&st);
	printf("Enter ET  :");scanf("%d",&et);
	
	total = et - st;
	
	if(st<12 && et<=12)
		if(st>=12 && et>12)
			if(st<12 && et >12)
				total=(et-st)*300;
		else
			total=(et-st)*200;		
	else
		total=(et-st)*100;
		
	printf("\n===========================================\n");
    printf("                Invoice\n");
	printf("===========================================\n");
	
	printf("StartTime\tEndTime\t\tTotal\n");
	printf("%d\t\t%d\t\t%d\n",st,et,total);
	
	printf("===========================================\n");
	printf("Thank you for order....");
	
}