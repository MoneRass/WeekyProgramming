#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char arr[100][100];
    int i=0;
    int count=0;
    FILE *fp;
    printf("Input data string:\n");
    for(int i=0;i!=-1;i++)
    {
        scanf("%s", str);
        count++;
        strcpy(arr[i], str);
        if(*str==46)break;
    }
    fp=fopen("C:\\temp\\data.txt","w+");
    for(int i=0;i<=count;i++)
    {
        fputs(arr[i], fp);
        fputs("\n", fp);
    }
    
    fclose(fp);
    return 0;
}
