//Write a c program to print factorial of n
#include<stdio.h>

int main(){
    int i=1,n;
    long int fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("%ld",fact);
    return 0;
}
       