//Digit Addition
//Develop a program to find the sum of a number's first and last digits.

#include<stdio.h>
#include<conio.h>

int main(){
    int num,i,j,z,sum;
    printf("Digit Addition - Sum of a number's first and last digit\n\n");
    printf("Enter a number : ");
    scanf("%d",&num);
    i=num%10; //Last digit
    j=num;
    while(j>10){
        j=j/10;
        z=j; //First digit
    }
    sum=i+z;
    printf("Sum of first and last digit in %d is %d.",num,sum);
    return 0;
}