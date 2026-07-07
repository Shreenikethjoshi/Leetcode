class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> nge(nums.size());
        for(int i=2*nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                nge[i]=st.empty() ? -1:st.top();
            }
            st.push(nums[i%n]);
        }
        return nge;
    }
};