#include<iostream>
using namespace std;

//1)   Write a program to convert binary numbers to decimal numbers
// using a for loop

// int binaryToDecimal(int binaryNumber) {
//     int decimalNumber = 0, base = 1, remainder;
//     while (binaryNumber != 0) {
//         remainder = binaryNumber % 10;
//         decimalNumber += remainder * base;
//         base *= 2;
//         binaryNumber /= 10;
//     }
//     return decimalNumber;
// }

// int main() {
//     int binaryNumber;
//     cout << "Enter a binary number: ";
//     cin >> binaryNumber;

//     int decimalNumber = binaryToDecimal(binaryNumber);

//     cout << "Decimal equivalent: " << decimalNumber << endl;

// }


// 2)  Write a program to convert decimal numbers to binary numbers
// using a for loop.

// int decimalToBinary(int decimalNumber) {
//     int binaryNumber[32];
//     int i = 0;
//     while (decimalNumber > 0) {
//         binaryNumber[i] = decimalNumber % 2;
//         decimalNumber = decimalNumber / 2;
//         i++;
//     }

//     cout << "Binary equivalent: ";
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binaryNumber[j];
//     }
//     cout << endl;
// }

// int main() {
//     int decimalNumber;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;

//     decimalToBinary(decimalNumber);

// }


// 3  Write a program to convert decimal numbers to Octal numbers.


// int decimalToOctal(int decimalNumber) {
//     int octalNumber[100];
//     int i = 0;
//     while (decimalNumber > 0) {
//         octalNumber[i] = decimalNumber % 8;
//         decimalNumber = decimalNumber / 8;
//         i++;
//     }

//     cout << "Octal equivalent: ";
//     for (int j = i - 1; j >= 0; j--) {
//         cout << octalNumber[j];
//     }
//     cout << endl;
// }

// int main() {
//     int decimalNumber;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;

//     decimalToOctal(decimalNumber);

// }


// 4 Write a program to convert Octal numbers to decimal numbers.

// int octalToDecimal(int octalNumber) {
//     int decimalNumber = 0, base = 1, remainder;
//     while (octalNumber > 0) {
//         remainder = octalNumber % 10;
//         decimalNumber += remainder * base;
//         base *= 8;
//         octalNumber /= 10;
//     }
//     return decimalNumber;
// }

// int main() {
//     int octalNumber;
//     cout << "Enter an octal number: ";
//     cin >> octalNumber;

//     int decimalNumber = octalToDecimal(octalNumber);

//     cout << "Decimal equivalent: " << decimalNumber << endl;
// }


// 5  Write a program to convert binary to Octal numbers

// int binaryToDecimal(int binaryNumber) {
//     int decimalNumber = 0, base = 1;
//     while (binaryNumber > 0) {
//         int digit = binaryNumber % 10;
//         decimalNumber += digit * base;
//         base *= 2;
//         binaryNumber /= 10;
//     }
//     return decimalNumber;
// }

// int decimalToOctal(int decimalNumber) {
//     int octalNumber = 0, base = 1;
//     while (decimalNumber > 0) {
//         int digit = decimalNumber % 8;
//         octalNumber += digit * base;
//         base *= 10;
//         decimalNumber /= 8;
//     }
//     return octalNumber;
// }

// int binaryToOctal(int binaryNumber) {
//     int decimalNumber = binaryToDecimal(binaryNumber);
//     int octalNumber = decimalToOctal(decimalNumber);
//     return octalNumber;
// }

// int main() {
//     int binaryNumber;
//     cout << "Enter a binary number: ";
//     cin >> binaryNumber;

//     int octalNumber = binaryToOctal(binaryNumber);

//     cout << "Octal equivalent: " << octalNumber << endl;

// }


// 6 Write a program to convert Octal numbers to binary numbers

// int octalToBinary(int octalNumber) {
//     int binaryNumber = 0, decimalNumber = 0, base = 1;

//     while (octalNumber > 0) {
//         int digit = octalNumber % 10;
//         decimalNumber += digit * base;
//         base *= 8;
//         octalNumber /= 10;
//     }

//     base = 1; 

//     while (decimalNumber > 0) {
//         int bit = decimalNumber % 2;
//         binaryNumber += bit * base;
//         base *= 10;
//         decimalNumber /= 2;
//     }

//     return binaryNumber;
// }

// int main() {
//     int octalNumber;
//     cout << "Enter an octal number: ";
//     cin >> octalNumber;

//     int binaryNumber = octalToBinary(octalNumber);

//     cout << "Binary equivalent: " << binaryNumber << endl;

// }