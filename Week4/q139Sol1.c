#include<stdio.h>
int main()
{
    int num,hour,min;
    scanf_s("%d", &num);

    hour=num/3600;
    num-=hour*3600;
    min=num/60;
    num-=min*60;

    printf("%d:%02d:%02d", hour, min, num);
    return 0;
}
