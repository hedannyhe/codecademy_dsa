#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int n = 0;
    cin >> n;
    if(n <= 0) {
        cout << "Invalid Input" << endl;
        return 1;
    }
    for(int i = n; i > 0; i--) {
        for(int j = 1; j < i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
