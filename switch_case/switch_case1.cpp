#include <stdio.h>
#include<conio.h>
#include<ctype.h>
int main() {
char ch;
    printf("Enter : ");
    scanf("%s", &ch);
	tolower(ch);
	
    	switch(ch) {
        	case 'm':
            	printf("Monday\n");
            	break;
        	case 't':
            	printf("Tuesday\n");
            	break;
        	case 'w':
            	printf("Wednesday\n");
            	break;
        	case 'h':
            	printf("Thursday\n");
            	break;
        	case 'f':
            	printf("Friday\n");
            	break;
        	case 'sa':
            	printf("Saturday\n");
            	break;
        	case 's':
            	printf("Sunday\n");
            	break;
        	case 'i':
        		printf("I LOVE YOU BABY \n");
        		break;
        	case 'a':
        		printf("ah jm \n");
        		break;
        	
        	default:
            	printf("Invalid please input again\n");
        }
	return 0;
}