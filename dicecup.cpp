#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, mx, mn;
    cin >> a >> b;
    mx = max(a, b);
    mn = min(a, b);
    for(int i = mn + 1; i <= mx + 1; i++)
        cout << i << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}