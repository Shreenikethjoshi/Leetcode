class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest=INT_MIN,smallest=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest) largest=nums[i];
             if(nums[i]<smallest) smallest=nums[i];
        }
        int gcd=1;
        for(int i=min(largest,smallest);i>1;i--){
            if(largest%i==0 && smallest%i==0) {
                gcd=i;
                break;
            }
        }
        return gcd;

    }
};