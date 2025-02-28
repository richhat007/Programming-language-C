#include<stdio.h> // for input output
#include<conio.h> // for system
#include<stdlib.h> 

int main()
{
	int a,b,sum;
	char ch;
	again:
		system("cls");
		printf("input a =");scanf("%d",&a);
		printf("input b =");scanf("%d",&b);
		
		
		sum=a+b;
		
		
		printf("sum = %d\n",sum);
		printf("Press Key Enter to continue:\n");
		ch=getch();
		if(ch==13){
			goto again;
		}
}