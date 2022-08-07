#include<stdio.h>
void print(int);
int main(){
    int N;
    printf("enter N term\n");
    scanf("%d",&N);
    printf("%d  natural number in reverse order is :\n",N);
    print(N);
    return 0;
}
void print(int n){
    if (n>=1)
    {
        printf("%d\n",n);

        print(n-1);

        /* code */
    }
    
}