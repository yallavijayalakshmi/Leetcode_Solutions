class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>t;
        t.push(s[0]);
        for(int i=1;i<s.size();i++){
            if( !t.empty() && t.top() == s[i]){
                t.pop();
            }
            else{
                t.push(s[i]);
            }
        }
            string ans = "";
            while(!t.empty()){
                ans += t.top();
                t.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;

        
    }
};