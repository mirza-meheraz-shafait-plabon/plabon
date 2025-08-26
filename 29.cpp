#include <iostream>
#include <cmath>
using namespace std;
bool isAmstrong(int num) {
    int originalNumber = num;
    int sum = 0;
    int digitCount = 0;
    int temp = originalNumber;
    if (temp == 0) {
        digitCount = 1;
        } else {
        while (temp > 0) {
            temp /= 10;
            digitCount++;}}
    temp = originalNumber;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digitCount);
        temp /= 10;}
    return sum == originalNumber;}
int main() {
    cout << "Armstrong numbers between 1 and 100 are: ";
        for (int i = 1; i <= 1000; i++) {
        if (isAmstrong(i)) {
            cout << i << " ";}}

    return 0;
}
