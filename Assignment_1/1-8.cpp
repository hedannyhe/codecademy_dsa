#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        for(int spaces = n - i; spaces > 0; spaces--) {
            cout << "  ";
        }
        for(int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}