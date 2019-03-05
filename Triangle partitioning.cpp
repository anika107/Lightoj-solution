#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll t, f = 0;
    cin >> t;
    double ab, ac, bc, r;
    while(t--){
        cin >> ab >> ac >> bc >> r;
        double s = 0, m;
        double e = ab;
        int i = 0;
        while(s + 1e-12 < e){
            m = (s+e) / 2.00;
            double de = (m * bc) / ab;
            double ae = (m * ac) / ab;
            double p = (ab + bc + ac) / 2.00;
            double o = (m + de + ae) / 2.00;
            double abc = sqrt(p*(p-ab)*(p-bc)*(p-ac));
            double ade = sqrt(o*(o-m)*(o-de)*(o-ae));
            double B = abc - ade;
            double R = ade/(abc - ade);
            if(r == R) break;
            if(R > r){
                e = m;
            }
            else{
                s = m;
            }
            i ++;
        }
        cout << "Case " << ++f << ":" << " " << fixed << setprecision(8)<< m << endl;
    }
    return 0;
}
