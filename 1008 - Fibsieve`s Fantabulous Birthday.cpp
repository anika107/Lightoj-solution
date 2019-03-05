#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, t, c, r, f = 0;
    cin >> t;
    while(t --){
        cin >> n;
        ll k = ceil(sqrt(n));
        //cout << k << endl;
        if(k % 2!= 0){
            if((n - (k-1)*(k-1)) > k){
                //cout << ((k*k)-n)  << " " << n << " " << k*k<< endl;
                c = (k*k)-n+1;
                r = k;
            }
            else{
                //cout << 5 << endl;
                c = k;
                r = n - ((k-1)*(k-1));
            }
        }
        else{
            if((n - (k-1)*(k-1)) > k){
               c = k;
               //cout << 6 << endl;
               //r = n - ((k-1)*(k-1)) + 2;
                r = (k*k) - n + 1;
            }
            else{
                    //cout << 7 << endl;
                c = n - ((k-1)*(k-1));
                r = k;
            }
        }
        cout << "Case "<< ++f  << ": " << c << " " << r << endl;
    }
    return 0;
}
