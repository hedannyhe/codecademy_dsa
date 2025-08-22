#include <bits/stdc++.h>
using namespace std;

void print_n(char c, int n) {
    for(int i = 0; i < n; i++) {
        cout << c;
    }
}

int main(int argc, char** argv) {
    int x;
    cin >> x;
    int width = (2 * x) - 1;
    for(int i = 0; i < width; i++) {
        for(int j = 0; j < width; j++) {
            cout << x - min({i, j, width - 1 - i, width - 1 - j}) << " ";
        }
        cout << endl;
    }
    return 0;
}