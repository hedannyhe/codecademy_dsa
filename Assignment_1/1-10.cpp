#include <iostream>
using namespace std;

void print_n(char c, int n) {
    for(int i = 0; i < n; i++) {
        cout << c;
    }
}

int main(int argc, char** argv) {
    int x;
    cin >> x;
    // Assuming x is 1/2 the width of the expected output
    for(int spaces = 0; spaces < x; spaces++) {
        print_n('*', x - spaces);
        print_n(' ', spaces * 2);
        print_n('*', x - spaces);
        cout << endl;
    }
    for(int spaces = x - 1; spaces >= 0; spaces--) {
        print_n('*', x - spaces);
        print_n(' ', spaces * 2);
        print_n('*', x - spaces);
        cout << endl;
    }
    return 0;
}