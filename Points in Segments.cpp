#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, x, y, n, q, ts = 1;
    vector <ll> v;
    vector <ll> ::iterator f, l;
    scanf("%lld", &t);
    while(t --){
        v.clear();
        scanf("%lld %lld", &n, &q);
        while(n --){
            scanf("%lld", &x);
            v.push_back(x);
        }
        //f = lower_bound(v.begin(), v.end(), 3);
        //l = upper_bound(v.begin(), v.end(), 7);
        //cout << f-v.begin() << " " << l - v.begin() << endl;
        printf("Case %lld:\n", ts++);
        while(q --){
             scanf("%lld %lld", &x, &y);
             f = lower_bound(v.begin(), v.end(), x);
             l = upper_bound(v.begin(), v.end(), y);
             //cout << l-f << endl;
             x = l-f;
             printf("%lld\n", x);
        }
    }
    return 0;
}
