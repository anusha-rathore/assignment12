#include<stdio.h>
void odd(int);
int main(){
    int N;
    printf("enter N term\n");
    scanf("%d",&N);
    printf("%d odd  natural number is :\n",N);
    odd(N);
    return 0;
}
void odd(int n){
    if (n>=1)
    {
        odd(n-1);
        printf("%d\n",2*n-1);

        /* code */
    }
    
}