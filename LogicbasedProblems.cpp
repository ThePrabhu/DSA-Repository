#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // checking prime
    // int prime;
    // cin >> prime;

    // bool is_prime = true;
    // if (prime <21){
    //     is_prime = false;
    //     return 0;
    // }else{
    //     for (int i = 2 ; i <= sqrt(prime); ++i){
    //         if (prime % i == 0){
    //             is_prime = false;
    //             break;
    //         }
    //     }
    // }

    // if (is_prime) {
    //     cout << "Prime" << endl;
    // } else {
    //     cout << "Not prime" << endl;
    // }


    //Print All Primes up to N
    // int num;
    // cin >> num;

    // vector<int> nums;

    // if (num < 2) {
    //     cout << 1 << endl;
    // } else {
    //     for (int i = 2; i <= num; ++i) {
    //         bool isPrime = true;
    //         for (int j = 2; j < i; ++j) { 
    //             if (i % j == 0) {
    //                 isPrime = false;
    //                 break;
    //             }
    //         }
    //         if (isPrime) {
    //             nums.push_back(i); 
    //         }
    //     }
    // }

    // Print primes
    // for (int p : nums) {
    //     cout << p << " ";
    // }
    // cout << endl;

    //-------------------Perfect Number
    int perfectNum;
    int sum = 0;
    cin >> perfectNum;

    for (int i = 1 ; i < perfectNum; i++){
        if (perfectNum % i == 0){
            sum += i;
        }
    }
    if (sum == perfectNum){
        cout << "You entered prefect number" << endl;
    }else {
        cout << "Not a perfect number" << endl;
    }

    // Count Digits in a Number
    int num1 = 1234;
    string  reversed = "";
    int count = 0;
    string str= to_string(num1);
    for (char c : str){
        count += 1;
        reversed = c + reversed;
    }
    if (reversed == str){
        cout << "given one is a palindrome"<< endl;
    }else{
        cout << "Not a palindrome"<< endl;
    }

    cout << "Number of digits: " << count << endl;
    cout << "reversed digits : " << reversed << endl;

    // Armstrong Number
    int armstrongnum = 153;
    int add = 0;
    string armstring = to_string(armstrongnum);

    for(char c : armstring){
        add += pow((c - '0'), 3);
    }

    if(add == armstrongnum){
        cout << "armstrong number" << endl;
    }else{
        cout << "not an armstrong number" << endl;
    }

    // Print Fibonacci Series up to N
    int a= 0;
    int b = 1;
    int n = 5;
    for (int i = 0 ; i < n; i++){
        cout << a << " " << b << " " << endl;
        a = b;
        b = b+1;
    }

    return 0;

}