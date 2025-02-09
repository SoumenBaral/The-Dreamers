#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int i;
    for ( i = 0; i <= n; i=i+1)
    {
        
      
      if(i==5){
        continue;
      }
      printf("Shakib --> %d \n",i);
      
    }

    
    return 0;
}