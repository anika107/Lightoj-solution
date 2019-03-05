#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int T,n,m,c=0,r;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&n,&m);
        if(n%(2*m)==0)
        {
           r=m*(n/2);
           printf("Case %lld: %lld\n",++c,r);
        }
    }
    return 0;
}
