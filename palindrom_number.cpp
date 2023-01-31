#include <iostream>
#include "math.h"
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        if (x==0) return true;
        int sum  = 0;
        int m = log10(x)+1;
        for(int i = 0; i < m; i++){
            int64_t f1 = pow(10.0, m-i-1);
            int64_t f2 = x/pow(10, i);
            int64_t f3 =  (1.0/10.0) * f2;
            sum += f1 * (f2 - 10*f3);
        }
        return sum == x;
    }
};


int main() {
    Solution sl;
    std::cout << sl.isPalindrome(10) << std::endl;
    return 0;
}
