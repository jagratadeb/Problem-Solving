class Solution {
    public int mySqrt(int x) {
        int res = 0;
        for(int i = 0; i <= x; i++){
            if((long) i*i <= x){
                res = i;
            }else{
                break;
            }
        }
        return res;
    }
}