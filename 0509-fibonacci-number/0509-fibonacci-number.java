class Solution {
    public int fib(int n) {
        int[] F = new int[31];
        F[0] = 0;
        F[1] = 1;
        for(int i = 2; i < 31; i++){
            F[i] = F[i-2] + F[i-1];
        }
        return F[n];
    }
}