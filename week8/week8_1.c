#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[100][100];
    int word=0;
    printf("Input data string:\n");
    for(int i=0;i!=-1;i++)
    {
        scanf("%s", str[i]);
        if(*str[i]==46)break;
        word++;
    }
    fp=fopen("C:\\temp\\data.txt","w");
    for(int i=0;i<=word;i++)
    {
        fprintf(fp, "%s\n", str[i]);
    }
    fclose(fp);
    return 0;
}
