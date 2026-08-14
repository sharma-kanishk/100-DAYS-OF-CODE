//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){
    int s;
    printf("ENTER TIME IN SECONDS :");
    scanf("%d",&s);
    
    printf("hours : %d , minutes : %d , seconds : %d", s/3600, (s%3600)/60, (s%3600)%60);
    return 0;
}