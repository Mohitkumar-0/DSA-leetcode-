class Solution {
    long long mod = 1'000'000'007;
    vector<vector<long long>> PT;

    long long solve(vector<int>& nums) {
        int m = nums.size();

        if (m < 3) {
            return 1;
        }

        vector<int> left, right;
        int root = nums[0];

        for (int i = 1; i < m; i++) {
            if (nums[i] < root) {
                left.push_back(nums[i]);
            } else {
                right.push_back(nums[i]);
            }
        }

        long long leftWays = solve(left) % mod;
        long long rightWays = solve(right) % mod;

        return (((leftWays * rightWays) % mod) *
                PT[m - 1][left.size()]) % mod;
    }
public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();

        PT.assign(n + 1, vector<long long>());

        for (int i = 0; i <= n; i++) {
            PT[i].assign(i + 1, 1);

            for (int j = 1; j < i; j++) {
                PT[i][j] =
                    (PT[i - 1][j - 1] + PT[i - 1][j]) % mod;
            }
        }

        long long ans = (solve(nums) - 1 + mod) % mod;
        return (int)ans;
    }
};