#include<stdio.h>
#include<string.h>

int main()
{
    int uc=0,lc=0;
    char str[100];

    scanf_s("%s", str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90){ uc++; }
        else if(str[i]>=97 && str[i]<=172){ lc++; }
    }
    printf("Uppercase : %d\n", uc);
    printf("Lowercase : %d", lc);
    return 0;
}
