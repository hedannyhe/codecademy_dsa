#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv) {
    int mathGrade, physicsGrade, chemGrade;
    cin >> mathGrade >> physicsGrade >> chemGrade;
    double avgGrade = (mathGrade + physicsGrade + chemGrade) / 3.0;
    bool passed = mathGrade >= 40 && physicsGrade >= 40 && chemGrade >= 40;
    char letterGrade;
    if(!passed || avgGrade < 60) {
        letterGrade = 'F';
    } else if(avgGrade >= 90) {
        letterGrade = 'A';
    } else if(avgGrade >= 80) {
        letterGrade = 'B';
    } else if(avgGrade >= 70) {
        letterGrade = 'C';
    } else {
        letterGrade = 'D';
    }
    cout << "Final Percentage: ";
    cout << setprecision(2) << fixed << avgGrade << "%" << endl << endl;
    cout << "Status: " << (passed ? "Pass" : "Fail") << endl << endl;
    cout << "Letter Grade: " << letterGrade << endl;
    return 0;
}
