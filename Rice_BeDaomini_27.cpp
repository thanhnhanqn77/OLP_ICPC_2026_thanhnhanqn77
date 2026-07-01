#include<bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

const int INF = (int)1e9 + 100;
const int N = (int)1e6 + 5;
double C, p, n1, n2, t1, t2;

signed main(){
    cin >> C >> p >> n1 >> n2 >> t1 >> t2;
    double res = 0;
    double ans = C / (t1 / n1 + t2 / n2 + p);

    for(int sl = (int) ans - 5; sl <= ans + 5; sl++) {
        int tmp = ((int)sl / n1 * (int)t1 + (int)sl / n2 * (int)t2 + (int)sl * p);
//        cout << sl << ' ' << tmp << '\n';
        if(((int)sl / (int)n1 * (int)t1 + (int)sl / (int)n2 * (int)t2 + (int)sl * (int)p) <= C) {
            res = sl;
        }
    }
    cout << (int)res;
}
