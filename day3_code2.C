#include <stdio.h>

//write a c programme to swap 2 numbers using a temeperary variable;
int main(){
    int num1,num2,temp;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);

    //swapping values of num1 and num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 = %d,num2 = %d\n",num1,num2);
    return 0;
}