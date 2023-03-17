class Solution {
public:
    void sortColors(vector<int>& arr) {
       int a=0,b=0,c=arr.size()-1;
       while(b<=c){
           if(arr[b]==0){
               swap(arr[a],arr[b]);
               a++,b++;
           }
           else if(arr[b]==2){
               swap(arr[c],arr[b]);
               c--;
           }
           else{
               b++;
           }

       }
        
    }
};
