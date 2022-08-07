#include<stdio.h>
void square(int);
int main(){
    int N;
    printf("enter N term\n");
    scanf("%d",&N);
    printf(" squares of first %d natural numbers :\n",N);
    square(N);
    return 0;
}
void  square(int n){
    if (n>=1)
    {
        square(n-1);
        printf("%d\n",n*n);
    }    
}