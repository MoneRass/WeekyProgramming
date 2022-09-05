#include<stdio.h>

int main()
{
    int sec,min,h;
    scanf_s("%d", &sec);
    h = sec/3600;
    sec%=3600;
    min = sec/60;
    sec%=60;
    printf("%d:%02d:%02d", h, min, sec);
    return 0;
}
