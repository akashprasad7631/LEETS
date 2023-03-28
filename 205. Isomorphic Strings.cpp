class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr[255]={0};
        bool hash[255]={0};
        for(int i=0;i<s.length();i++){
            if(hash[t[i]]==0 && arr[s[i]]==0){

            hash[t[i]]=1;
            arr[s[i]] =t[i];
            }
           
        }
        for(int i=0;i<s.size();i++){
            if((char)arr[s[i]]!=t[i])
            return false;
        }
        return true;
    }
};
