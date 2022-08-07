#include<stdio.h>
void octal(int);
int main()
{
    int number;
    printf("enter any number\n");
    scanf("%d",&number);
    octal(number);
}
void octal(int n){
    if (n==0)
    {
     return;
    }
    octal(n/8);
    printf("%d",n%8);
    
}