//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long count = 0,i=1,len =N;
        while(len!=0){
            long long set = (N+1)/(i*2);
            count += set *i;
            set = (N+1)/i;
            if(set % 2 == 1)
            count += (N+1)%i;
            i*=2;
            len >>= 1;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
