// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
 bool static mysort(Item &item1,Item &item2)
    {
        double d1=(double)((double)item1.value/(double)item1.weight);
         double d2=(double)((double)item2.value/(double)item2.weight);
        return d1>d2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,mysort);
        
        double ans=0;
        for(int i=0;i<n;i++)
        {
            if(W>=arr[i].weight)
            {
                ans+=(double)arr[i].value;
                W-=arr[i].weight;
            }
            else
            {
                ans+=(double)(W*arr[i].value)/(double)(arr[i].weight);
                break;
            }
        }
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends