#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    // Assuming n is the width of the widest line in the pyramid
    int n;
    cin >> n;
    int whitespace = 0;
    for(int i = n; i > 0; i -= 2) {
        for(int j = 0; j < whitespace; j++) {
            cout << " ";
        }
        for(int k = 0; k < i; k++) {
            cout << "*";
        }
        whitespace++;
        cout << endl;
    }
    return 0;
}