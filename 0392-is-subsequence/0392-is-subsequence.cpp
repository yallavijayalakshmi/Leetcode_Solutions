class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt =0;
        int i=0;
        int j=0;
       while(j< t.size() && i< s.size()){
        if(s[i] == t[j]){
            cnt+=1;
            j++;
            i++;
        }
        else{
            j++;
        }
       }
       if(s.size() == cnt){
        return true;
       }
       return false;
    }
};