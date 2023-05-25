//wap to reverse the given string and print both strings 
#include<stdio.h>

int main()
{
    char str[100];
    int i=0;
    gets(str);
    printf("given string : ");
    while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
    }
    printf("\nreverse of given string : ");
    while(i>=0){
    printf("%c",str[i]);
    i--;
    }
    return 0;
}
