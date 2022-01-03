// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        int num=1,n=S.size();
        string ans="";
        stack<int> s;
        for(int i=0;i<=n;i++)
        {
            s.push(num++);
            if(n==i or S[i]=='I')
            {
                while(!s.empty())
                {
                    char c='0'+s.top();
                    ans.push_back(c);
                    s.pop();
                }
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
