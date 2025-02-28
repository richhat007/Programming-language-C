#include<stdio.h>

//#include<stdlib.h>
int main(){
	int st,et,total;
	char lp[20];
	printf("Enter License  plate =");gets(lp);
	printf("Enter START    TIME  =");scanf("%d",&st);
	printf("Enter END      TIME  =");scanf("%d",&et);
	
	
	if(st<12 && et<12)
		total = (et - st) *100;
	else if(st>12 && et >12)
		total = (et - st )* 200;
	else if (st<12 && et >=12)
		total = (12 -st) *100 + (et -12)*200;
	printf("=========================================\n");
	printf("		Invice\n");
	printf("=========================================\n");
	
	printf("LICENSE PLATE = %s\n",lp);
	
	printf("START   TIME  = %d\n",st);
	
	printf("END     TIME  = %d\n",et);
	
	printf("TOTAL         = %dreil\n",total);
	
}