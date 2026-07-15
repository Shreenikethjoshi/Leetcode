class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum=0,oddSum=0;
        for(int i=1;i<=n;i++){
            evenSum+=2*i;
            oddSum+=2*i-1;
        }
        int gcd=1;
        for(int i=min(evenSum,oddSum);i>=1;i--){
            if(evenSum%i==0 && oddSum%i==0){
                gcd=i;
                break;
            }
        }
        return gcd;
    }
};