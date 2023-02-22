//factorial of given number
#include<stdio.h>

int main(){
    int i=1,n;
    long int f=1;
    scanf("%d",&n);
    while(i<=n){
    f*=i;
    i++;
    }
    printf("%ld",f);
    return 0;
}
