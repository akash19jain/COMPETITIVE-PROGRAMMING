class Solution {
public:
    void leftrotate(string &s,int d)
    {
        reverse(s.begin(),s.begin()+d);
        reverse(s.begin()+d,s.end());
        reverse(s.begin(),s.end());
    }
    
    void rightrotate(string &s,int d)
    {
        leftrotate(s,s.length()-d);
    }
    string stringShift(string s, vector<vector<int>>& shift) 
    {
        int n=shift.size();
        for(int i=0;i<n;i++)
        {
            int x=shift[i][0];
            int y=shift[i][1];
            if(x==0)
                leftrotate(s,y);
            else
                rightrotate(s,y);
        }
        return s;
    }
};