/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) 
    {
        vector<int> s=binaryMatrix.dimensions();
        int n=s[0],m=s[1];
        int x=0,y=m-1;
        int ans=-1;
        while(x<n && y>=0)
        {
            if(binaryMatrix.get(x,y)==0)
                x++;
            else
            {
                ans=y;
                y--;
            }
        }
        return ans;
    }
};