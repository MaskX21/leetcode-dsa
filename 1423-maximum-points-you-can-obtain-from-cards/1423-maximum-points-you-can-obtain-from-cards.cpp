class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = k-1;
        int r = n-1;
        int sum = 0;

        for(int i = 0; i<k;i++){
            sum += cardPoints[i];
        }

        int maxsum = sum;
        while(l>=0){
            sum = sum - cardPoints[l];
            l--;
            sum = sum + cardPoints[r];
            r--;

            maxsum = max(maxsum , sum);
        }

        return maxsum;
    }
};