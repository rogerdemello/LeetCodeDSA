class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> vec(cost.size());

        for (int i = 0; i < vec.size(); i++)
            vec[i] = min((i ? vec[i - 1] : INT_MAX), cost[i]);
            
        return vec;
    }
};