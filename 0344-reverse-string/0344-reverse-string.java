class Solution {
    public void reverseString(char[] s) {
        int size = s.length;
        int limit = size/2;
        for(int i = 0; i < limit; i++){
            char temp = s[i];
            s[i] = s[size - 1 - i];
            s[size - 1 - i] = temp;
        }
    }
}