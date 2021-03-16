#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string ccNumber;
    
    cout << "This program uses the Luhn Algorigthm to validate a CC number." << endl;
    cout << "You can enter 'exit' anytime to quit." << endl;

    while (true) {
        
        cout << "Please enter a CC number to validate: ";
        cin >> ccNumber;
        
        if (ccNumber == "exit")
            break;

        else if (!isNumberString(ccNumber)) {
            cout << "Bad input! ";
            continue;
        }

        int len = ccNumber.length();
        int doubleEvenSum = 0;

         // Step 1 is to double every second digit, starting from the right. If it
        // results in a two digit number, add both the digits to obtain a single
        // digit number. Finally, sum all the answers to obtain 'doubleEvenSum'. 