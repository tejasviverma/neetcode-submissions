class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int res = right;

        while(left<=right){
            int mid = left + (right-left)/2;
            long long time = 0;
            for(int pile: piles){
                time += (pile + mid - 1LL) / mid;
            }
            if(time<=h){
                res = mid;
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        return res;
    }
};