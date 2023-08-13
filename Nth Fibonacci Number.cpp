//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int mod = 1000000007;
        if(n==0) return 0;
        if(n==1) return 1; 
        long long int a = 0,b = 1, sum= 0;
        for(int i=2;i<=n;i++){
           sum = (a + b)%mod;
           a = b;
           b = sum; 
        }
        return sum%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
