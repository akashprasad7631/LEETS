class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        
        while(i<nums.size()){
            if(nums[i]!=i){
                if(nums[i]>nums.size()-1 || nums[i]<0){
                    i++;
                }
                else{
                    int j=nums[i];
                     int temp=nums[j];
                     nums[i]=temp;
                     nums[j]=j;
                     if(temp==j){
                         i++;}
                }
            }
            else{
                i++;
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i&&i){
                return i;
            }
        }

        if(nums[0]==nums.size()){
            return nums.size()+1;
        }
        else{
            return nums.size();
        }
    }
    
};
