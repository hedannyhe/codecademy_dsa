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
    // Assuming x is the width of the expected output
    print_n('*', x);
    cout << endl;
    for(int i = 0; i < x - 2; i++) {
        cout << '*';
        print_n(' ', x - 2);
        cout << '*' << endl;
    }
    print_n('*', x);
    cout << endl;
    return 0;
}