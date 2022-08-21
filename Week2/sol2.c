//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
#include<stdio.h>
#include<string.h>

int main()
{
    char text[100];
    scanf_s("%s", &text);
    strrev(text);
    printf("%s", text);
    return 0;
}
