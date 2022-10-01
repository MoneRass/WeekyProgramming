#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    scanf_s("%s", str);
    int uc=0,lc=0;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==toupper(str[i])){ uc++; }
        else if(str[i]==tolower(str[i])){ lc++; }
    }
    printf("Uppercase : %d\n", uc);
    printf("Lowercase : %d", lc);

    return 0;
}
