// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string func(string &s,int &ind)
    {
        int n=0;
        string ans="";
        while(ind<s.size())
        {
            if(s[ind]>='0' and s[ind]<='9')
            {
                n=(n*10)+s[ind]-'0';
            }
            else if(s[ind]=='[')
            {
                string tmp=func(s,++ind);
                while(n>0)
                {
                    ans+=tmp;
                    n--;
                }
            }
            else if(s[ind]==']')
            {
                return ans;
            }
            else
            {
                ans.push_back(s[ind]);
            }
            ind++;
        }
        return ans;
        
    }
    string decodedString(string s){
        // code here
        int ind=0;
        return func(s,ind);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
