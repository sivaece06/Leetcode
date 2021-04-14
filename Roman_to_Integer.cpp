class Solution {
public:
    int romanToInt(string s) {
       map<char, int> mp;
       int res = 0;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        char prev = s[s.length()-1];
        for (int i= s.length() - 1; i >= 0; i--) {
      //    cout << s.length() << " " << i << " " << " " << prev << mp[s[i]] <<"\n";
          if ( ( (prev == 'V' || prev == 'X') && s[i] =='I') || \
               ( (prev == 'L' || prev == 'C') && s[i] == 'X') || \
               ( (prev == 'D' || prev == 'M') && s[i] == 'C') ) {
                    res -= mp[s[i]];
              } else {
                    res += mp[s[i]];
              }
            
            prev = s[i];
        }
        
        return res;
    }
};
