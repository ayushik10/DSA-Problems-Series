#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int integerBreak(int n) {
        std::vector<int> dp(n + 1, 0);
        dp[1] = 1;
        
        for (int num = 2; num <= n; ++num) {
            dp[num] = (num == n) ? 0 : num;
            for (int i = 1; i < num; ++i) {
                int val = dp[i] * dp[num - i];
                dp[num] = std::max(dp[num], val);
            }
        }
        
        return dp[n];
    }
};

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;
    
    Solution solution;
    int result = solution.integerBreak(n);
    
    std::cout << "Maximum product of integers for " << n << " is: " << result << std::endl;
    
    return 0;
}
