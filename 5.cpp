#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    float fnum = static_cast<float>(num);
    cout << "Floating point number: " << fnum << endl;
    return 0;
}
