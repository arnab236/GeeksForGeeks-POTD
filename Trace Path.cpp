
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
        int sl = 0, sr = 0, su = 0, sd = 0;

    int lr = 0, ud = 0;
    
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == 'L')
            lr++;
        else if (s[i] == 'R')
            lr--;
        else if (s[i] == 'U')
            ud++;
        else
            ud--;
        
        if (lr >= 0)
            sl = max(sl, lr);
        else
            sr = min(sr, lr);
        
        if (ud >= 0)
            su = max(su, ud);
        else
            sd = min(sd, ud);
    }
    
    if ((sl - sr < m) && (su - sd < n))
        return 1;
    
    return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
