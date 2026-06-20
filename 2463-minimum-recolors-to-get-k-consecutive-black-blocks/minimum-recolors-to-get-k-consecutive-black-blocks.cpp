class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int l = 0;
        int white = 0;
        int ans = INT_MAX;

        for (int r = 0; r < blocks.size(); r++) {
            if (blocks[r] == 'W') white++;

            if (r - l + 1 == k) {
                ans = min(ans, white);

                if (blocks[l] == 'W') white--;
                l++;
            }
        }
        return ans;
    }
};