https://leetcode.com/interview/2/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y;
        int ans=__builtin_popcount(z);
        return ans;
    }
};