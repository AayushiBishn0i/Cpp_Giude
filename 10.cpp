#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int terms;
    double sum = 0;
    cout << "Enter the number of terms: ";
    cin >> terms;
    for (int i = 1; i <= terms; i++) {
        sum += pow(i, i) / i;
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}
