class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int rows = matrix.size(), cols = matrix[0].size();
          
          for(int i=0;i<rows;i++)
          {
              if(matrix[i][0]<=target and matrix[i][cols-1]>=target)
              {
                  int low=0;
                  int high=cols-1;
                  bool ak=false;
                  while(low<high)
                  {
                      int mid=low+(high-low)/2;
                      if(matrix[i][mid]==target)
                          return true;
                      else if(matrix[i][mid]>target)
                          high=mid-1;
                      else
                          low=mid+1;
                      
                  }
                  if(matrix[i][low]==target)
                      return true;
                  
                  return false;
              }
          }
        return false;
    }
};