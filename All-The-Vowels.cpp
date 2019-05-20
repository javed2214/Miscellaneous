// All the Vowels Please (Codeforces)
// https://codeforces.com/contest/1166/problem/B

#include <bits/stdc++.h>
using namespace std;

char vowels[6] = "aeiou";

void YES(int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout<<vowels[(i+j)%5];
        }
    }
    cout<<endl;
    exit(0);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k; cin>>k;
    for (int r = 5; r <= k; r++) {
        if (k % r == 0) {
            int c = k / r;
            if (c >= 5) {
                YES(r, c);
            }
        }
    }
    cout<<-1<<endl;
}