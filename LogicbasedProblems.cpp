#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {

    // ---------------- PRIME CHECK (Single Number) ----------------
    /*
    int prime;
    cin >> prime;

    bool is_prime = true;

    if (prime <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i <= sqrt(prime); i++) {
            if (prime % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
        cout << "Prime\n";
    else
        cout << "Not Prime\n";
    */

    // ---------------- PRINT PRIMES UP TO N ----------------
    /*
    int num;
    cin >> num;
    vector<int> nums;

    for (int i = 2; i <= num; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            nums.push_back(i);
    }

    for (int p : nums)
        cout << p << " ";
    cout << endl;
    */

    // ---------------- PERFECT NUMBER ----------------
    int perfectNum;
    cin >> perfectNum;

    int sum = 0;
    for (int i = 1; i < perfectNum; i++) {
        if (perfectNum % i == 0)
            sum += i;
    }

    if (sum == perfectNum)
        cout << "Perfect number\n";
    else
        cout << "Not a perfect number\n";

    // ---------------- COUNT DIGITS + PALINDROME ----------------
    int num1 = 1234;
    string str = to_string(num1);
    string reversed = "";
    int count = 0;

    for (char c : str) {
        count++;
        reversed = c + reversed;
    }

    if (reversed == str)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    cout << "Digits: " << count << endl;
    cout << "Reversed: " << reversed << endl;

    // ---------------- ARMSTRONG NUMBER ----------------
    int armstrongNum = 153;
    int add = 0;
    string armStr = to_string(armstrongNum);

    for (char c : armStr)
        add += pow(c - '0', 3);

    if (add == armstrongNum)
        cout << "Armstrong\n";
    else
        cout << "Not Armstrong\n";

    // ---------------- FIBONACCI ----------------
    int a = 0, b = 1, fibN = 5;

    for (int i = 0; i < fibN; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    // ---------------- FLAG: ALL DIGITS EVEN ----------------
    int num = 2486;
    bool allEven = true;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            allEven = false;
            break;
        }
        num /= 10;
    }

    if (allEven)
        cout << "All digits even\n";
    else
        cout << "Not all digits even\n";

    return 0;
}
