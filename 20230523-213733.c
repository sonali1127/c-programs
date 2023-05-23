//wap to read an age of 20 persons and find out how many of them fall
//under 1. baby age  2.school age   3. aduld age.
#include<stdio.h>

int main()
{
    int age,i=1,b,s,a;
    b=s=a=0;
    while(i<=20){
    scanf("%d",&age);
    if(age<=4)
    b++;
    else if(age<=19)
    s++;
    else
    a++;
    i++;
    }
    printf("baby age : %d\n",b);
    printf("school age : %d\n",s);
    printf("adult age : %d\n",a);
    return 0;
}