#include<stdio.h>
int main()
{
	int id;
	char name[15];
	char sex[15];
	char add[25];
	float math,eng,kh;
	float avg;
	
	printf("Enter ID              :");scanf("%d",&id);
	fflush(stdin);
	printf("Enter Name            :");gets(name);
	printf("Enter Sex             :");scanf("%s",&sex);
	fflush(stdin);
	printf("Enter Address         :");gets(add);
	printf("Enter Math            : ",math);scanf("%f",&math);
	printf("Enter English         : ",eng);scanf("%f",&eng);
	printf("Enter Khmer           : ",kh);scanf("%f",&kh);
	avg = (math+eng+kh)/3;
	
	printf("ID	\tName	\tSex	\tAddress	\tAverage\n",id,name,sex,add,avg);
	printf("%d	\t%s	\t%s	\t%s	\t%f",id,name,sex,add,avg);
	
}