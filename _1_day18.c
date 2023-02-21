//Write a program to print given number is palindrome or not
#include<stdio.h>

int main(){
    int n,r,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(temp==sum)
    printf("palindrome");
    else
    printf("not a palindrome");
    return 0;
}
