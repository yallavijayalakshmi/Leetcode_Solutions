class Solution {
public:
int dp[501][501];
int  solve( int n,int m ,  string &word1,string &word2 ){
    if(n==0||m==0){
        return max(n,m);
    }
    if(dp[n][m] != -1) return dp[n][m];
    if(word1[n-1] == word2[m-1]){
        return solve(n-1,m-1,word1,word2);
            }
            //add
            int add = 1+solve(n,m-1,word1,word2);
            int remove = 1+solve(n-1,m,word1,word2);
            int replace = 1+solve(n-1,m-1,word1,word2);
            return dp[n][m]= min(add,min(replace,remove));
}
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        memset(dp,-1,sizeof(dp));
        int ans = solve(n,m,word1,word2);
    return ans;
    }

};