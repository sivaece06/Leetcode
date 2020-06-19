class Solution {
public:
    int countPrimes(int n) {
        
        if (n <= 2)
            return 0;
        
        vector<bool> isprime (n , true);
        
        
        for (int i = 2; (i * i) < isprime.size(); i+=1) {            
            if (isprime[i]) {
                for ( int j = i; j *i < isprime.size(); j+=1)
                    isprime[i*j] = false;
            }
        }
         
        int count = 0;
    
        for (int i = 2; i < isprime.size(); i++) {
            if (isprime[i])
                count++;
        }
    
        return (count);
    }
};
