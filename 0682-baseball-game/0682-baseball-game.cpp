class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>sum;
        for(string op: operations){
            if(op == "C"){
                sum.pop_back();
            }
            else if(op == "D"){
                sum.push_back(sum.back()*2);
            }
            else if(op == "+"){
                int n = sum.size();
                sum.push_back(sum[n-1] + sum[n-2]);
            }
            else{
                sum.push_back(stoi(op));
            }
        }
        int ans =0;
        for(int i=0;i<sum.size();i++){
            ans +=  sum[i];
        }
        return ans;
    }
};