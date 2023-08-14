//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        long long int mod =1000000007;
        long long int x=1l,y=0l;
        for(int i=2;i<=N;i++)
       {
        long long int mx=x;
        long long int my=y;
        
        y=(3*mx)%mod;
        x=(((2*mx)%mod)+my)%mod;
       }
    return (int)y;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends
