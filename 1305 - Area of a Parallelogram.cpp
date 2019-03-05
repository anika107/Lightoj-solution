#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int t,a1,a2,b1,b2,c1,c2,d1,d2,c=0;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld %ld %ld %ld %ld",&a1,&a2,&b1,&b2,&c1,&c2);
        d1=(c1+a1)-b1;
        d2=(c2+a2)-b2;
        printf("Case %ld: %ld %ld %ld\n",++c,d1,d2,abs((b1-a1)*(d2-a2)-(b2-a2)*(d1-a1)));
    }
    return 0;
}
