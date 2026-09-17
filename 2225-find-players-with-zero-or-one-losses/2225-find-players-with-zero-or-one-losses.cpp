class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> mpp;

        for (int i = 0; i < matches.size(); i++) {
            int winner = matches[i][0];
            int loser = matches[i][1];

           
            mpp[winner] += 0;

         
            mpp[loser]++;
        }

        vector<int> zeroLoss;
        vector<int> oneLoss;

        for (auto x : mpp) {
            if (x.second == 0) {
                zeroLoss.push_back(x.first);
            }
            else if (x.second == 1) {
                oneLoss.push_back(x.first);
            }
        }

        return {zeroLoss, oneLoss};
    }
};