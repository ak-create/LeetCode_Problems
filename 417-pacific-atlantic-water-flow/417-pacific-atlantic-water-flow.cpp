class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        set<pair<int,int>>po,ao;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 or j==0)
                    po.insert({i,j});
                
                if(i==n-1 or j==m-1)
                    ao.insert({i,j});
            }
        }
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(po.find({i,j})!=po.end())
                {
                    vis[i][j]=1;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(q.size())
                    {
                        int x=q.front().first,y=q.front().second;
                        if(x+1<n and heights[x+1][y]>=heights[x][y] and vis[x+1][y]==0)
                        {
                            q.push({x+1,y});
                            po.insert({x+1,y});
                            vis[x+1][y]=1;
                        }
                        if(x-1>=0 and heights[x-1][y]>=heights[x][y] and vis[x-1][y]==0)
                        {
                            q.push({x-1,y});
                            po.insert({x-1,y});
                            vis[x-1][y]=1;
                        }
                        if(y+1<m and heights[x][y+1]>=heights[x][y] and vis[x][y+1]==0)
                        {
                            q.push({x,y+1});
                            po.insert({x,y+1});
                            vis[x][y+1]=1;
                        }
                        if(y-1>=0 and heights[x][y-1]>=heights[x][y] and vis[x][y-1]==0)
                        {
                            q.push({x,y-1});
                            po.insert({x,y-1});
                            vis[x][y-1]=1;
                        }
                        q.pop();
                    }  
                }
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
              vis[i][j]=0;
         }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ao.find({i,j})!=ao.end())
                {
                    vis[i][j]=1;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(q.size())
                    {
                        int x=q.front().first,y=q.front().second;
                        if(x+1<n and heights[x+1][y]>=heights[x][y] and vis[x+1][y]==0)
                        {
                            q.push({x+1,y});
                            ao.insert({x+1,y});
                            vis[x+1][y]=1;
                        }
                        if(x-1>=0 and heights[x-1][y]>=heights[x][y] and vis[x-1][y]==0)
                        {
                            q.push({x-1,y});
                            ao.insert({x-1,y});
                            vis[x-1][y]=1;
                        }
                        if(y+1<m and heights[x][y+1]>=heights[x][y] and vis[x][y+1]==0)
                        {
                            q.push({x,y+1});
                            ao.insert({x,y+1});
                            vis[x][y+1]=1;
                        }
                        if(y-1>=0 and heights[x][y-1]>=heights[x][y] and vis[x][y-1]==0)
                        {
                            q.push({x,y-1});
                            ao.insert({x,y-1});
                            vis[x][y-1]=1;
                        }
                        q.pop();
                    }  
                }
            }
        }
        
        vector<vector<int>>ans;
        
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(ao.find({i,j})!=ao.end() and po.find({i,j})!=po.end())
                    ans.push_back({i,j});
            
         }
        
        return ans;
        
        
        
        
    }
};