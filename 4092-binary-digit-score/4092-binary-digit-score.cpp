class Solution {
public:
    int calculateScore(int a, int b) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<31;i++){
            if(a&(1<<i)) cnt1+=1;
            if(b&(1<<i)) cnt2+=1;
        }
        if(cnt1>=cnt2) return cnt1*cnt2;
        else{
            return cnt2/cnt1;
        }
    }
};