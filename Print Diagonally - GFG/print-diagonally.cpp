//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;

 for(int col=0;col<n;col++){

     int i=0;

     int j=col;

     while(i<n&&j>=0){

         ans.push_back(A[i][j]);

         i++;

         j--;

     }

 }

 for(int row=1;row<n;row++){

     int i=row;

     int j=n-1;

     while(i<n&&j>=0){

         ans.push_back(A[i][j]);

         i++;

         j--;

     }

 }

 return ans;

 }
	

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends