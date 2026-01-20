class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) return 1;   
        if (n == 3) return 2; 
        int product = 1;
        // Keep breaking n into 3s until n <= 4
        while (n > 4) {
            product *= 3;
            n -= 3;
        }
        
        product *= n;
        return product;
    }
};
