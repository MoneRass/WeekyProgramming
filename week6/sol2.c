#include<stdio.h>

int facN(int n)
{
    int result=1;
    for(int i=n;i>0;i--)
    {
        result*=i;
    }
    return result;
}

int facR(int r)
{
    int result=1;
    for(int i=r;i>0;i--)
    {
        result*=i;
    }
    return result;
}

int facNR(int n,int r)
{
    int result=1;
    for(int i=n-r;i>0;i--)
    {
        result*=i;
    }
    return result;
}

int permutation(int n, int r)
{
    int res;
    res = facN(n) / (facNR(n,r));
    return res;
}

int combination(int n, int r)
{
    int res = 1;
    res = facN(n) / (facNR(n,r) * facR(r));
    return res;
}

int main()
{
    int n,r;
    scanf_s("%d %d", &n,&r);
    printf("Permutation : %d\n", permutation(n, r));
    printf("Combination : %d", combination(n,r));
    return 0;
}
