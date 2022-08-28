#include <stdio.h>

int main()
{
    int r,i,j,line,row;
    scanf_s("%d", &r);
    line = (r*2)-1;
    for(i=1;i<=line;i++)
    {
        row=(r*2)-i;
        for(j=1;j<=line;j++)
        {
            if((j>=i || j<=row) && i>=r)printf("*");
            else if((j<=i || j>=row) && i<=r)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

