#include<stdio.h>

int fac(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res*=i;
    }
    return res;
}

int permutation(int n, int r)
{
    int res=1;
    res = fac(n) / (fac(n-r));
    return res;
}

int combination(int n, int r)
{
    int res=1;
    res = fac(n) / (fac(n-r) * fac(r));
    return res;
}

int main()
{
    int n,r;
    scanf_s("%d %d", &n, &r);
    printf("Permutation : %d\n", permutation(n,r));
    printf("Combination : %d", combination(n,r));
    return 0;
}
