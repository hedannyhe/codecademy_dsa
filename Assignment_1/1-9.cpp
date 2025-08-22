#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cin >> n;
    char c = 'A' + (n - 1);
    for(int i = 0; i < n; i++) {
        for(char cur = c - i; cur <= c; cur++) {
            cout << cur << " ";
        }
        cout << endl;
    }
    return 0;
}