// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& sl) {
        //code here
        map<string,vector<string>> mp;
        int n=sl.size();
        for(int i=0;i<n;i++)
        {
            string tmp=sl[i];
            sort(tmp.begin(),tmp.end());
            if(mp.find(tmp)!=mp.end())mp[tmp].push_back(sl[i]);
            else mp[tmp].push_back(sl[i]);
        }
        vector<vector<string>> ans;
        for(auto i:mp)
        {
            ans.push_back(i.second);            
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
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
