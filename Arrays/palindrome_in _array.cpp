// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    int k, sum = 0, temp = a[i], num = a[i];
    	    while(temp!=0)
    	    {
    	        k = temp %10;

    	        sum = sum*10 + k;
    	        temp = temp/10;
    	    }
    	    if(sum != num)
    	    {
    	        return 0;

    	    }

    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
