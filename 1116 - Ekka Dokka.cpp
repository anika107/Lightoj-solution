#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long N,M,W,T,c=0,flag;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&W);
        if(W%2!=0)
            printf("Case %lld: Impossible\n",++c);
        else
        {
            M=1;
            while(W%2==0)
            {
                M*=2;
                W/=2;
            }
            printf("Case %lld: %lld %lld\n",++c,W,M);
        }
    }
    return 0;
}
