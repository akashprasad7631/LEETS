class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int s=0,e=nums.size()-1;
       int ft=-1;
       int lt=-1;

       while(s<=e){
           int mid=s+(e-s)/2;
           if(nums[mid]>target){
               e=mid-1;
           }
           else if(nums[mid]<target){
                s=mid+1;
           }
           else{
               ft=mid;
               e=mid-1;
           }
       }
    s=0;
    e=nums.size()-1;
    int mid=s+(e-s)/2;
       while(s<=e){
        
           if(nums[mid]>target){
               e=mid-1;
           }
           else if(nums[mid]<target){
                s=mid+1;
           }
           else{
               lt=mid;
               s=mid+1;
           }
           mid=s+(e-s)/2;
       }
       vector<int> ans;
       ans.push_back(ft);
       ans.push_back(lt);
       return ans;

    }
};
