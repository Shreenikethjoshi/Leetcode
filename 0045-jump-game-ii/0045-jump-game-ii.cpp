class Solution {
public:
    // int helper(int ind,int jumps,vector<vector<int>> &dp,vector<int>& nums){
    //     if(ind>=nums.size()-1) return jumps;
    //     if(dp[ind][jumps]!=-1) return dp[ind][jumps];
    //     int mini=INT_MAX;
    //     for(int i=1;i<=nums[ind];i++){
    //         mini=min(mini,helper(ind+i,jumps+1,dp,nums));
    //     }
    //     return dp[ind][jumps]=mini;
    // }
    int jump(vector<int>& nums) {
        // vector<vector<int>> dp(nums.size(),vector<int>(nums.size()+1,-1));
        // return helper(0,0,dp,nums);
        int jumps=0,l=0,r=0,cnt=0,maxCnt=0;
        int farthest;
        while(r<nums.size()-1){
            farthest=0;
            for(int i=l;i<=r;i++){
                farthest=max(i+nums[i],farthest);
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
};