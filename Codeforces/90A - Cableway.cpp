#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define mii map<int, int>
#define vi vector<int>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define popb pop_back
#define all(v) v.begin(),v.end()
#define mset(v, x) memset(v, x, sizeof(v))
#define mset2d(v, x, n) memset(v, x, sizeof(v[0][0]) * n * n)
#define mset2dd(v, x, n, m) memset(v, x, sizeof(v[0][0]) * n * m)
#define debug(x) cout<<#x<<" : "<<x<<endl
#define debug2(x,y) cout<<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cout<<"hola papa"<<endl
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

vi v(3);

int main() {
    while (cin >> v[0] >> v[1] >> v[2]) {
        int ans = 0;
        bool flag = 1;
        while (flag) {
            for (int i = 0; i < 3; ++i) {
                if (v[0] > 0 || v[1] > 0 || v[2] > 0) {
                    v[i] = v[i] - 2, ++ans;
                } else {
                    flag = 0;
                    break;
                }
            }
        }
        cout << 30 + ans - 1 << "\n";
    }
}