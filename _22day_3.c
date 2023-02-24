//Write a program to print 1 to n and n to 1 
#include<stdio.h>

int main(){
    int j,i,n;
    scanf("%d",&n);
    for(i=1,j=n;i<=n && j>=1;i++,j--)
    printf("%d  %d\n",i,j);
    return 0;
}
