#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int i;
    long long int sum =0;
    for ( i = 0; i <= n; i=i+1)
    {
       sum = sum + i;
    //    printf("%d %d \n",sum ,i);
    }
    printf("%lld",sum);
    
    return 0;
}