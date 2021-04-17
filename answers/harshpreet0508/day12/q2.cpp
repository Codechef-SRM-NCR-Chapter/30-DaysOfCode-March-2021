// Give a string s, count the number of non-empty (contiguous) substrings that have the same number of 
// 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.
  
class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        int z = 0;
        int o = 0;
        bool check;
        if(s[0]=='0'){
            z++;
            check = true;
        }
        else{
            o++;
            check = false;
        }
        for(int i=1;i<s.size();i++){
            if(check){
                if(s[i]=='0'){
                    z++;
                    if(o>=z){
                        res++;
                    }
                }
                else{
                    res++;
                    o=0;
                    check = false;
                    o++;
                }
            }
            else{
                if(s[i]=='1'){
                    o++;
                    if(z>=o){
                        res++;
                    }
                }
                else{
                    res++;
                    z=0;
                    check = true;
                    z++;
                }
            }
        }
        return res;
    }
};
