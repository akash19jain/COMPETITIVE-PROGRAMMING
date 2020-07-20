class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K)
    {

        sort(points.begin(), points.end(), [](vector<int>p1, vector<int>p2) -> bool
        {
            return (p1[0] * p1[0] + p1[1] * p1[1] <= p2[0] * p2[0] + p2[1] * p2[1]);
        });

        vector<vector<int>> res;
        for (int i = 0; i < K; i++)
            res.push_back(points[i]);
        return res;

    }
};