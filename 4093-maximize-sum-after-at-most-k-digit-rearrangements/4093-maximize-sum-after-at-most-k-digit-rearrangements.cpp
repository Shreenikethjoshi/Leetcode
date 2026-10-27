class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long sum=0;
        long rearranged;
        for( long num:nums){
            sum+=num;
            string s=to_string(num);
            sort(s.begin(),s.end(),greater<char>());
            rearranged=stoi(s);
            pq.push(rearranged-num);
        }
        while(k-- > 0 && !pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};