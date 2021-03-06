class Solution {
public:
        //vector<vector<string>>ans;
    bool ISitSafe(vector<string>& board,int curr_row,int j,int &n)
    {
        for(int i=curr_row-1;i>=0;i--)
            if(board[i][j]=='Q')
                return false;
        
        for(int i=curr_row-1,col=j-1;i>=0 and col>=0 ;i--,col--)
            if(board[i][col]=='Q')
                return false;
        
        for(int i=curr_row-1,col=j+1;i>=0 and col<n ;i--,col++)
            if(board[i][col]=='Q')
                return false;
        
        return true;
        
        
    }

    void solve( vector<string>&board,int curr_row,int &n,int&ans)
    {
        if(curr_row==n)
        {
          ans++;
            return ;
        }
        
        for(int i=0;i<n;i++)
            if(ISitSafe(board,curr_row,i,n))
            {
                board[curr_row][i]='Q';
                solve(board,curr_row+1,n,ans);
                board[curr_row][i]='.';
                
            }
        
    }
    
    
    int totalNQueens(int n) {
            vector<string>board(n,string(n,'.'));
        int ans=0;

        //      for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<board[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
       solve(board,0,n,ans);
       
       return ans;
    }
};