//find whether the given char is alphabet or digit or spl symbol
#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("alphabet");
    else if(ch>='0' && ch<='9')
    printf("digits");
    else
    printf("special symbols");
    return 0;
}
