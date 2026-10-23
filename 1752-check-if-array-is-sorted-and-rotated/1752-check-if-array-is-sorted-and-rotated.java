class Solution {
    public boolean check(int[] nums) {
        int size = nums.length;
        if(size == 1) return true;
        int count = 1;

        for(int i = 1; i < size * 2; i++){
            if(nums[(i-1) % size] <= nums[i % size])
                count++;
            else
                count = 1;
            if (count == size) return true;
        }

        return false;
    }
}