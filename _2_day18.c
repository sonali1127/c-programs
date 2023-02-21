//Write a program to print given number is Armstrong number or not
#include<stdio.h>

int main(){
    int n,r,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(temp==sum)
    printf("armstrong");
    else
    printf("not a armstrong");
    return 0;
}