//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long arr3[m+n];
            int s = m+n; 
            
            for(int i=0;i<n;i++)
                arr3[i] = arr1[i];
              for (int i = 0, j = n;j < s && i < m ; i++, j++) 
                  arr3[j] = arr2[i];
                  
            sort(arr3,arr3+m+n);
            
            for(int i=0;i<n;i++)
                arr1[i] = arr3[i];
            for (int i = 0, j = n;j < s && i < m ; i++, j++) 
                  arr2[i] = arr3[j];
            
        } 
};


//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
