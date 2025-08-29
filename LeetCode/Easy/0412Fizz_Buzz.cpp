#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Your Solution class
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> result;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                result.push_back("FizzBuzz");
            else if (i % 3 == 0)
                result.push_back("Fizz");
            else if (i % 5 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
        }
        return result;
    }
};

int main()
{
    int n = 15; // Example value
    Solution sol;
    vector<string> output = sol.fizzBuzz(n);

    for (const string &str : output)
    {
        cout << str << endl;
    }

    return 0;
}
