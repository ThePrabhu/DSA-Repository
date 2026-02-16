class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {   // Continue until single digit
            int sum = 0;

            while (num > 0) {  // Extract digits
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }

            num = sum;  // Replace num with digit sum
        }

        return num;
    }
};
