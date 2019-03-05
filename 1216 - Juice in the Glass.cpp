#include <bits/stdc++.h>
using namespace std;

#define for(n) for(int i = 0; i < n ;i++)
#define pb(n) push_back(n)
#define ll long long
# define PI 3.14159265358979323846
int main(){
    double R , r, h, p;
    int t, f = 0;
    cin >> t;
    while(t --){
    cin >> R >> r >> h >>p;
    double glass = (PI/3) * (h * ((R*R) + (r * r)+(r * R))), first, last;
    double l = r, u = R, m;
    while(l + 1e-12 < u){
        m = (l+u) / 2.00;
        first = (PI/3) * ((h-p) * ((R*R) + (m * m)+(m * R)));
        last = (PI/3) * ((p) * ((m*m) + (r * r)+(m * r)));
        if(glass < first+last){
            u = m;
        }
        else{
            l = m;
        }
    }
    cout << "Case " << ++ f << ": " << setprecision(14) << last << endl;
    }
    return 0;
}
