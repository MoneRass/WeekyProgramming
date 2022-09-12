#include<stdio.h>
int main()
{
    int res,a,b;
    scanf_s("%d", &a);
    res=a&1;
    if(res==0)printf("Even");
    else printf("Odd");
    return 0;
}
