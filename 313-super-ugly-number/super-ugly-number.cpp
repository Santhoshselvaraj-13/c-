#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        vector<int> ugly(n);     
        ugly[0] = 1;                 

        vector<int> indices(k, 0);   
        vector<long long> nextMultiple(primes.begin(), primes.end()); 

        for (int i = 1; i < n; i++) {
            // Find the minimum among next multiples
            long long nextUgly = *min_element(nextMultiple.begin(), nextMultiple.end());
            ugly[i] = (int)nextUgly;

            // Update the multiples which matched the minimum
            for (int j = 0; j < k; j++) {
                if (nextUgly == nextMultiple[j]) {
                    indices[j]++;
                    nextMultiple[j] = (long long)primes[j] * ugly[indices[j]];
                }
            }
        }

        return ugly[n - 1];
    }
};
