class Solution {
 public:
  int maximumLength(vector<int>& nums) {
    vector<vector<int>> vec(2, vector<int>(2));

    for (int i : nums)
        for (int j = 0; j < 2; j++)
            vec[i % 2][j] = vec[j][i % 2] + 1;

    return accumulate(vec.begin(), vec.end(), 0, [](int acc, vector<int>& row){
        return max(acc, ranges::max(row));
    });
  }
};
