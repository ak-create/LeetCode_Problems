// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isValid(int i,int j,vector<vector<int>>&vis,int n)
    {
return vis[i][j]==0;
    }
    void rec(int i,int j,vector<vector<int>> &m,string &s,vector<string>&v,vector<vector<int>>&vis,int n)
    {
        if(i==n-1 and j==n-1)
        {
        v.push_back(s);
        return;
        }
        if(i>=n or j>=n or i<0 or j<0)
        return;
        
        if(i+1<n and m[i+1][j]==1 and vis[i+1][j]==0 and isValid(i+1,j,vis,n))
         {
             vis[i+1][j]=1;
             s.push_back('D');
             rec(i+1,j,m,s,v,vis,n);
             vis[i+1][j]=0;
             s.pop_back();
         }
         if(j+1<n and m[i][j+1]==1 and vis[i][j+1]==0 and isValid(i,j+1,vis,n))
         {
             vis[i][j+1]=1;
             s.push_back('R');
             rec(i,j+1,m,s,v,vis,n);
             vis[i][j+1]=0;
             s.pop_back();
         } 
         if(i-1>=0 and m[i-1][j]==1 and vis[i-1][j]==0 and isValid(i-1,j,vis,n))
         {
             vis[i-1][j]=1;
              s.push_back('U');
             rec(i-1,j,m,s,v,vis,n);
             vis[i-1][j]=0;
            s.pop_back();
         } 
         if(j-1>=0 and m[i][j-1]==1 and vis[i][j-1]==0 and isValid(i,j-1,vis,n))
         {
             vis[i][j-1]=1;
              s.push_back('L');
             rec(i,j-1,m,s,v,vis,n);
             vis[i][j-1]=0;
            s.pop_back();
         } 
        
        
        
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s="";
        vector<string>v;
        vector<vector<int>>vis(n+1,vector<int>(n+1,0));
        if(m[0][0]==0 or m[n-1][n-1]==0)
        return v;
        vis[0][0]=1;
        rec(0,0,m,s,v,vis,n);
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends