class Solution {
public:
    vector<int>dx={-1,1,0,0};
    vector<int>dy={0,0,1,-1};
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<pair<int,int>>island;
        int n=grid[0].size(),m=grid.size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
              if(grid[i][j])
                  island.push_back({i,j});
            }
        }
        int ans=0;
       // set<pair<int,int>>us;
        queue<pair<int,int>>q;
        int temp=0;
       // cout<<dx.size()<<endl;
        for(int i=0;i<island.size();i++){
            temp=0;
        if(grid[island[i].first][island[i].second]==1){
        q.push(island[i]);
         grid[island[i].first][island[i].second]=-1;
        while(q.size())
        {
            int sz=q.size();
            temp+=q.size();
            while(sz--)
            {
                pair<int,int> curr= q.front();
                q.pop();
                for(int ind=0;ind<4;ind++)
                {
                    if(curr.first+dx[ind]<m and curr.first+dx[ind]>=0 and 
                       curr.second+dy[ind]<n and curr.second+dy[ind]>=0 and 
                       grid[curr.first+dx[ind]][curr.second+dy[ind]]==1 ){
                        q.push({curr.first+dx[ind],curr.second+dy[ind]});
                        grid[curr.first+dx[ind]][curr.second+dy[ind]]=-1;
                   //  us.insert({curr.first+dx[ind],curr.second+dy[ind]}); 
                    }
                }
                
            }
          }
            ans=max(ans,temp);
        }
        }
        return ans;
    }
};