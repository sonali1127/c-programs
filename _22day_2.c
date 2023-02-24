//Write a program to print factors count of the given number
#include<stdio.h>

int main(){
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    printf("%d",c);
    return 0;
}
