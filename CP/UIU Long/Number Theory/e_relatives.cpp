#include<cstdio>
#include<cmath>
using namespace std;

int phi(int n)
{
    int res=n;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            while (n%i==0) n/=i;
            res-=res/i;
        }
    }
    if (n>1) res-=res/n;
    return res;
}
int main ()
{
    int n;
    while (scanf("%d",&n)==1)
    {
        if (n==0) return 0;
        if (n==1) printf("0\n");
        else printf("%d\n",phi(n));
    }

    return 0;
}