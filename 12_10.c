#include<stdio.h>
int reverse_number(int);
int sum=0;
int main()
{
    int number;
    printf("enter digit\n");
    scanf("%d",&number);
   int r= reverse_number(number);
    printf("%d",r);
}
int reverse_number(int n){
    int r;
    if (n)
    {
    r=n%10;
    sum=sum*10+r;
    reverse_number(n/10);
    }
    return sum;
    }