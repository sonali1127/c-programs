//write a c program to print count of prime numbers between the given range
#include<stdio.h>

int main(){
    int i,j,s,e,c=0,r=0;
    scanf("%d%d",&s,&e);
    for(i=s;i<=e;i++){
        if(i==1||i==0)
        continue;
        c=0;
        for(j=2;j<=i/2;j++){
        if(i%j==0){
            c++;
            break;
        }
        }
        if(c==0)
        r++;
    }
    printf("the count of prime numbers from %d to %d is %d",s,e,r);
    return 0;
}
