#include<stdio.h>

int main(void){

    unsigned long fib1= 0, fib2= 1, fib3;
    int start;

    printf("input the index value: ");
    scanf("%d",&start);

    switch(start){
    case 0:
        printf("F0 = %lu\n", fib1);
        break;
	case 1:
        printf("F1 = %lu\n", fib2);
        break;
    default:
        for(int i=0; i<=(start-2); i++){
            fib3= fib1 + fib2;
            printf("F%d = %lu, F%d = %lu, F%d = %lu\n", i, fib1, i+1, fib2, i+2, fib3);
            fib1= fib2;
            fib2= fib3;
        }
    }

    return 0;
}
