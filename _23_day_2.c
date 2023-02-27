// Write a c program to print sum of digits of a given number until sum is a single digit.
#include<stdio.h>

int main(){
    int n,r,sum=0;
    scanf("%d",&n);
    while(n!=0||sum>9){
        if(n==0){
            n=sum;
            sum=0;
        }
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
