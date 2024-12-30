#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sum;
    int plus;
    int minus;
    int abbreviation;
    int divison;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another Number: ";
    cin >> y;
    plus = x + y;
    minus = x - y;
    abbreviation = x * y;
    divison = x / y;
    cout << "Plus is: " << plus << endl;
    cout << "Minus is: " << minus << endl;
    cout << "Abbreviation is: " << abbreviation << endl;
    cout << "Divison is: " << divison << endl;
    return 0;
}
