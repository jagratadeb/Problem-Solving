class Solution {
    public static boolean checkPalindrome(int x){
        int res = 0;
        int temp = x;
        while(temp != 0){
            res = res * 10 + (temp % 10);
            temp /= 10;
        }
        if(x == res)
            return true;

        return false;
    }
    public boolean isPalindrome(int x) {
        boolean res;
        if (x < 0){
            return false;
        } else {
            res  = checkPalindrome(x);
        }

        return res;
    }
}