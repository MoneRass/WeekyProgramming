#include<stdio.h>

int main()
{
    int count,num;
    scanf_s("%d", &num);
    count=1;
    while(count<=num)
    {
        printf("*");
        count++;
    }
    return 0;
}