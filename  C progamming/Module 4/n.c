#include<stdio.h>
int main(){

    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        char b=a-32;
        printf("%c",b);
    }
    else{
       char b=a+32;
        printf("%c",b);
    }
    return 0;
}