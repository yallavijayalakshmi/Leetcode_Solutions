class Solution {
public:
    int countPrimes(int n) {
         if (n <= 2) {
            return 0;
        }
      
        vector<char> isPrime(n, 1);
      
        isPrime[0] = 0;
        isPrime[1] = 0;
      
        int primeCount = 1;
      
        for (int i = 2; i*i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * 2; j < n; j += i) {
                    isPrime[j] = 0;
                }
            }
        }
        for(int i = 3 ; i < n ; i += 2){
            if(isPrime[i]) ++primeCount;
        }
      
        return primeCount;
    }
};