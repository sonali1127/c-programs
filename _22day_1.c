/* Write a program to print the following pattern

1   3   5    7
5   7   9  11
9  11 13 15 */
#include<stdio.h>

int main(){
    int i,j,k,l;
    for(i=1,j=3,k=5,l=7;i<=9 && j<=11 && k<=13 && l<=15;i+=4,j+=4,k+=4,l+=4)
    printf("%d  %d  %d  %d\n",i,j,k,l);
    return 0;
}
