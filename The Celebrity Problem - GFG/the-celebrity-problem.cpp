// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i=0;
        for(i ; i<n; i++){
            int sum =0;
            for(int j =0;j<n;j++){
                sum+=M[i][j];
            }
            if(sum==0) break;
        }
        
        if(i==n) return -1;
        
        int cnt =0;
        for(int j =0; j<n;j++){
            if(j!=i){
                if(M[j][i]==1) cnt++;
            }
        }
        
        if(cnt==n-1) return i;
        else return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends