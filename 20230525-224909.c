//find how many number of spl and lower case letter chars are there in the given string.
#include<stdio.h>

int main()
{
   char str[100];
   int i=0,spl,low,ch;
   gets(str); 
   spl=low=0;
   while(str[i]!='\0')
   {
    ch=str[i];
    if(ch>='a'&&ch<='z')
    low++;
    else if(!(ch>='0' && ch<='9')&&!(ch>='A'&&ch<='Z'))
    spl++;
    i++;
     }
printf("\nlower case:%d",low);
printf("\nSpl characters:%d",spl);
    return 0;
}