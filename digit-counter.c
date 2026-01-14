//Digit counter
//Develop a program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

int main(){
    int num,i=0,j;

    printf("Digit Counter\n\n");
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(j=num;j>0;j=j/10){
        i++;
    }
    printf("The total number of digits in %d is %d.",num,i);

    return 0;
}