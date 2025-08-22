#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n = 0;
    cin >> n;
    if(n <= 0) {
        cout << "Invalid Input" << endl;
        return 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
