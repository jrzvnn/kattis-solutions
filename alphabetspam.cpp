#include <bits/stdc++.h>

using namespace std;

void solve() {
    double a = 0, b = 0, c = 0, d = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if((int)s[i] == 95) a++;
        else if((int)s[i] >= 97 && (int)s[i] <= 122) b++;
        else if((int)s[i] >= 65 && (int)s[i] <= 90) c++;
        else d++;
    }
    printf("%.15lf\n", a / s.size());
    printf("%.15lf\n", b / s.size());
    printf("%.15lf\n", c / s.size());
    printf("%.15lf\n", d / s.size());
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
