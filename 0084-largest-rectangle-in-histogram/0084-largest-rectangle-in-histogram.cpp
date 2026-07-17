class Solution {
public:
    vector<int> findNSE(vector<int> &arr){
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            ans[i]=st.empty()? arr.size():st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findPSE(vector<int> &arr){
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            ans[i]=st.empty()? -1:st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse=findNSE(heights);
        vector<int> pse=findPSE(heights);
        int maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            maxArea=max(maxArea,heights[i]*(nse[i]-pse[i]-1));
        }
        return maxArea;
    }
};