class Solution {
public:
    int sumOfMultiples(int n) {
        vector <int> nums;
        int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }
        
        for(int num : nums)
        {
            if (num % 3 == 0 or num % 5 == 0 or num % 7 == 0)
                sum += num;
        }
        return sum;
    }
};

