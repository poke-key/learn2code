#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int number;

    cout << "Input a Number: ";
    cin >> number;

    for(int i = 2; i < (number-1); i++ ) {
        if(number % i == 0) {
            cout << number << " is not prime\n";
            exit (0);
        }
    }
        cout << number << " is prime\n";
} 