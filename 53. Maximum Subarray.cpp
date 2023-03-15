class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){

            if(curr<0){
                curr=0;
            }
            curr+=nums[i];
            ans=max(curr,ans);
            
        }
    return ans;
    }

};
