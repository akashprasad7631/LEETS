class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;




        while(s<e){
            if(nums[mid]>nums[e]){
                s=mid+1;

            }
            else {
                e=mid;
                // s++;
            }
            // else{
            //     e--;
            // }
            mid=s+(e-s)/2;
        }
        return nums[s];
                // while(s<=e){
        //     if(mid+1<nums.size() && nums[mid]>nums[mid+1]){
        //         return nums[mid+1];
        //     }
        //     if(mid-1>=0 && nums[mid]<nums[mid-1]){
        //         return nums[mid];
        //     }

        //     if(nums[s]>=nums[mid]){
        //         e=mid-1;
        //     }
        //     else{
        //         s=mid+1;
        //     }
        //     mid=s+(e-s)/2;
        // }
        // return nums[0];
    }
};
