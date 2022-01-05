class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,ans=INT_MAX,s=0,n=nums.size();
        while(j<n)
        {
            s+=nums[j++];
            while(s>=target)
            {
                ans=min(ans,j-i);
                s-=nums[i++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
