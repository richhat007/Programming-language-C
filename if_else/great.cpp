#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,k,e,h,c,b,p;
	float average;
	int score;
	char grade;
//	char name[20],gender[20];
//	printf("Input Name  =");gets(name);
//	printf("Input Gender=");gets(gender);
	printf("Input M     =");scanf("%d",&m);
	printf("Input K     =");scanf("%d",&k);
	printf("Input E     =");scanf("%d",&e);
	printf("Input H     =");scanf("%d",&h);
	printf("Input C     =");scanf("%d",&c);
	printf("Input B     =");scanf("%d",&b);
	printf("Input P     =");scanf("%d",&p);
	
	score = (m+k+e+h+c+b+p);
	average =(m+k+e+h+c+b+p)/7;
	if(score>=427 && score>475){
		grade = 'A';
	}
	else if (score>=380 && score<=427){
		grade= 'B';
	}
	else if (score>=332 && score<=379){
		grade= 'C';
	}
	else if (score>=286 && score<=331){
		grade= 'D';
	}
	else if (score>=237 && score<=285){
		grade= 'E';
	}
	else if(score<237){
		grade= 'F';
	}
	printf("________________________________________________________________________________\n");
	
	printf("M\tK\tE\tH\tC\tB\tP\tScore\tGrade\taverage\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\t%2.f\n", m, k, e, h, c, b, p, score, grade,average);
	
	
	printf("________________________________________________________________________________");
	return 0;
}