class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n)
        {
            int indi=i,indj=j;
            unordered_set<int>s;
            while(indi<n and indj<m)
            {
                s.insert(matrix[indi][indj]);
                indi++;indj++;
            }
            if(s.size()>1)
                return false;
            if(j!=0)
                j--;
            else
                i++;
        }
        return true;
    }
};