class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,score=0,mx_score=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                power-=tokens[i];
                i++;
                mx_score=max(mx_score,score);

            }
            else
            {
                power+=tokens[j];
                score--;
                j--;
            }
             if(score<0)
                 return 0;
            mx_score=max(mx_score,score);
        }
        return mx_score;
    }
};