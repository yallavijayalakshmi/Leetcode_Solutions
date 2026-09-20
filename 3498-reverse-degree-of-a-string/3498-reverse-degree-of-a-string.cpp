class Solution {
public:
    int reverseDegree(string s) {
         int a;
        int sum =0;
        for(int i=0;i<s.size();i++){
            a = (i+1)* (26 - (s[i] - 'a'));
             sum += a; 

        }
        return sum;
    }
};