class Solution {
public:
    int maxFreqSum(string s) {
         map<char,int> v;
        map<char,int>c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v[s[i]]++;
            }
            else{
                c[s[i]]++;
            }
        }
        int maxv =0;
        int maxc=0;
        for(auto x: v){
           maxv = max(maxv,x.second);
        }
        for(auto y: c){
            maxc = max(maxc,y.second);

        }
        int answer = maxv+maxc;
        return answer;
    }
};