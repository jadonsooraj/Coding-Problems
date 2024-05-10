#include<limits.h>

class Solution {
public:
    bool isPalindrome(int x) {
        int num_in_use = x, ans = 0;

        while (num_in_use > 0) {
            int digit = num_in_use % 10;

            //Before multiplying (ans*10) check whether ans*10 is in Integer limit, if not -> return 0
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
                return 0;

            ans = digit + (ans * 10);
            num_in_use = num_in_use / 10;
        }
        if (x == ans)
            return true;
        else
            return false;
    }
};