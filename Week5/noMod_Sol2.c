#include<stdio.h>
int main()
{
    int a,res;
    scanf_s("%d", &a);
    res=a-(2*(a/2));
    if (res==0 && a!=1) printf("Even");
    else printf("Odd");
    return 0;
} 
