#include <stdio.h>

int main() {

    int a, b, c, d, min;
	
    printf("Input A=");scanf("%d",&a);
    printf("Input B=");scanf("%d",&b);
    printf("Input C=");scanf("%d",&c);
    printf("Input D=");scanf("%d",&d);

    // Syntax
    min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }

    printf("Min is: %d\n",min);

    return 0;
}
