class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans;
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                sum = nums[i]+nums[j];
                if(sum==target){
                ans.push_back(i);
                ans.push_back(j);
                    break;
                }
                
            } if(ans.size()==2){
                break;
            }
        }
        return ans;
    }
};
