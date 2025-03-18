class Solution {
    public:
        int longestPalindrome(string s) {      
            int count[52] = {0};    
            for (int i = 0; i < s.length(); i++) {
                char c = s[i];
                if (c >= 'a' && c <= 'z') {
                    count[c - 'a']++; 
                } else if (c >= 'A' && c <= 'Z') {
                    count[c - 'A' + 26]++; 
                }
            }
            int res = 0;
            bool hasOdd = false;    
            for (int i = 0; i < 52; i++) {
                if (count[i] % 2 == 0) {
                    res += count[i];
                } else {
                    res += count[i] - 1; 
                    hasOdd = true; 
                }
            }
            if (hasOdd) {
                res += 1;
            }
            return res;
        }
    }; 
