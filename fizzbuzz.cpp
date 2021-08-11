#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= n; i++) {
        if(i % x == 0 && i % y == 0) 
            cout << "FizzBuzz" << '\n';
        else if(i % x == 0 || i % y == 0) {
            if(i % x == 0) 
                cout << "Fizz" << '\n';
            else 
                cout << "Buzz" << '\n';
        }
        else cout << i << '\n';
    }    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
