#include<stdio.h>
#include<conio.h>
int main(){
	// Loop true foever
//	int i;
//	i=1;
//	while (1){
//		printf("%6d",i);
//		i++;
//		if(kbhit()){ 
//			break;
//		}
//	}
	
	int i;
	i=1;
	while (!kbhit()){
		printf("%6d Ah Jm",i);
		i++;
	}
}