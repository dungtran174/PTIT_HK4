#include <bits/stdc++.h>
using namespace std;

void xuly() {
    int n; cin >> n;
    scanf("\n");
    int a[n+1][n+1] = {};
    for (int i = 1; i <= n; i++) {
        string s; 
        getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x) {
            a[i][x] = 1;
            a[x][i] = 1;
        }
    } 
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(a[i][j] == 1) {
                cout << i << " " << j << endl;
            }
        }
    }
}

int main() {
    int t = 1; 
    while(t--) {
        xuly();
        cout << "\n";
    }
}