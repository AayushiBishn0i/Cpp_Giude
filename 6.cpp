#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (islower(ch))
        ch = toupper(ch);
    else if (isupper(ch))
        ch = tolower(ch);
    cout << "Converted character: " << ch << endl;
    return 0;
}
