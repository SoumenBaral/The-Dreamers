#include<stdio.h>
int main(){
    int i , n;
    int sum = 0;
    float average ;
    scanf("%d", &n);
    printf("\n Print The keyboard Input Number: %d", n);
    for (i = 1; i<= n; i++){
        sum = sum + i;
        printf("\n Print The Input Number: %d", i);
    }
    printf("\n Print the Total sum Of the Input Number: %d", sum);
    average = sum*1.0 /n;
    printf("\n print The Average: %0.2f", average);
    return 0;
}