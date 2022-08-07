#include<stdio.h>
void print(int);
int main(){
    int N;
    printf("enter N term\n");
    scanf("%d",&N);
    printf("%d  natural number is :\n",N);
    print(N);
    return 0;
}
void print(int n){
    if (n>=1)
    {
        print(n-1);
        printf("%d\n",n);

        /* code */
    }
    
}