// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int ln) {
	    // code here
	    ull arr[ln+1];
	    ull ans,a=2,b=3,c=5,m=0,n=0,o=0;
	    arr[0]=1;
	    for(int i=1;i<ln;i++)
	    {
	       ans=min({a,b,c});
	       arr[i]=ans;
	       if(ans==a)
	       {
	           m++;
	           a=arr[m]*2;
	       }
	       if(ans==b)
	       {
	           n++;
	           b=arr[n]*3;
	       }
	       if(ans==c)
	       {
	           o++;
	           c=arr[i]*5;
	       }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
