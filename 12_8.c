#include<stdio.h>
void binary(int);
int main()
{
    int number;
    printf("enter any number\n");
    scanf("%d",&number);
    binary(number);
}
void binary(int n){
    if (n==0)
    {
     return;
    }
    binary(n/2);
    printf("%d",n%2);
    
}