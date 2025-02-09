#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int i;
    for ( i = 0; i <= n; i=i+1)
    {
        
      printf("Shakib --> %d \n",i);
      if(i==5){
        break;
      }
      
    }

    
    return 0;
}