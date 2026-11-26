class Solution {
    public int mySqrt(int x) {
        int res = 0;
        int low = 0;
        int high = x;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long square = (long) mid * mid;
            if(square <= x){
                low = mid + 1;
                res = mid;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
}