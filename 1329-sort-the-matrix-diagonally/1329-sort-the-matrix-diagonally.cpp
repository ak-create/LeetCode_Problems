class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=n-1;i>=0;i--)
        {
            int j=0,k=i;
            vector<int>t;
            while(k<n and j<m)
            {
                t.push_back(mat[k][j]);
                k++;j++;
            }
            sort(t.begin(),t.end());
            j=0;
            k=i;
            while(k<n and j<m)
            {
                mat[k][j]=t[j];
                k++;j++;
            }
          
            
        }
        
        for(int j=1;j<m;j++)
        {
            int i=0,k=j;
            vector<int>t;
            while(i<n and k<m)
            {
                t.push_back(mat[i][k]);
                i++;k++;
            }
            sort(t.begin(),t.end());
            i=0;
            k=j;
            while(i<n and k<m)
            {
                mat[i][k]=t[i];
                i++;k++;
            }
        }
        
        return mat;
    }
};