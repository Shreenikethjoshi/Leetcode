class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,maxLen=0,l=0,zeros=0,n=nums.size();
        while(r<n){
            if(nums[r]==0) zeros++;
            while(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k) maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};