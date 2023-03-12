class Solution {
public:
int lengthOfLongestSubstring(string s) {
    vector<int> v(128, -1); 
    int maxi = 0, start = -1;
    
    for (int i = 0; i < s.size(); i++)
    {
        if(v[s[i]] > start)
            start = v[s[i]];
        v[s[i]] = i;
        maxi = max(maxi, i - start);
    }
    return maxi;
}
};
