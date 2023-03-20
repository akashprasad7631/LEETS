class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (!n)
            return;
        
        int r = m + n - 1;
        
        --n;
        --m;
        while (n >= 0) {
            if (m >= 0 && nums1[m] > nums2[n]) { // O(1)
                nums1[r--] = nums1[m--]; // O(1)
                continue;
            }

            nums1[r--] = nums2[n--]; // O(1)
        }
    }
};
