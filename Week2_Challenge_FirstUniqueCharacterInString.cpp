class Solution {
    public:
        
          int firstUniqChar(string s) {
          int charCount[256] = {0};  
            for(int i = 0; i < s.size(); i++){
                charCount[s[i]] += 1;
            };
            for(int i = 0; i < s.size(); i++){
                if(charCount[s[i]] == 1){
                    return i;    
                }
            }
            return -1;
        }
    };
    
    
     
