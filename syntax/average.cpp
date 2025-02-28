#include<stdio.h>
int main()
{
	int id;
	char name[15];
	char sex;
	char add[25];
	float math,eng,kh;
	float avg;
	
	printf("Enter ID        :");scanf("%d",&id);
	fflush(stdin);
	printf("Enter Name      :");gets(name);
	printf("Enter Sex       :");scanf("%c",&sex);
	fflush(stdin);
	printf("Enter Address   :");gets(add);
	printf("Math            : ",math);scanf("%f",&math);
	printf("English         : ",eng);scanf("%f",&eng);
	printf("Khmer           : ",kh);scanf("%f",&kh);
	avg = (math+eng+kh)/3;
	
	printf("ID	\tName	\tSex	\tAddress	\tAverage\n",id,name,sex,add,avg);
	printf("%d	\t%s	\t%c	\t%s	\t%.4f",id,name,sex,add,avg);
	
}