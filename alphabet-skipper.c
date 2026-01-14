//Alphabet Skipper
//Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop.
//ASCII value for lowercase alphabets is from 97 to 122.
#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    int n,num,i=97;
    printf("Alphabet Skipper\n\n");
    printf("Enter number by which you want to skip alphabet : ");
    scanf("%d",&n);
    num=n+1;
    n++;

    do{
        ch=(char)i;
        if(n%num==0){
            printf("%c\t",ch);
        }
        n++;
        i++;
    }
    while(i<=122);

    return 0;
}