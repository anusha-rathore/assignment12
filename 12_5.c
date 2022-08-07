#include<stdio.h>
void even_number(int);
int main(){
    int N;
    printf("enter N term\n");
    scanf("%d",&N);
    printf("%d even natural number is :\n",N);
    even_number(N);
    return 0;
}
void even_number(int n){
    if (n>=1)
    {
        even_number(n-1);
        printf("%d\n",2*n);
    }    
}