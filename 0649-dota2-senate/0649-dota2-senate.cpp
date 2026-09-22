class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<senate.size();i++){
            if(senate[i] == 'R'){
                q1.push(i);
            }
            else{
                q2.push(i);
            }
        }
        while( !q1.empty() &&  !q2.empty())
        if(q1.front()<q2.front()){
            q2.pop();
            q1.push(q1.front()+size(senate));
            q1.pop();
        }
        else{
            q1.pop();
            q2.push(q2.front()+size(senate));
            q2.pop();

        }
        if(q1.empty()) return "Dire";
         else return "Radiant";
        
    }
};