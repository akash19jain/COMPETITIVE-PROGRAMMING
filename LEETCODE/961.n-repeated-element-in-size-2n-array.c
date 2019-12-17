//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int,int> maa;
        for(int z:A)
        {
            cout<<z<<"\n";
            maa[z]++;
            if(maa[z]>1)
                return z;
        }
        return -1;
    }
};
