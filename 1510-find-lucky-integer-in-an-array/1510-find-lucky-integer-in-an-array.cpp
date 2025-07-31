class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int x = -1;
        for(auto i:arr) mp[i]++;

        for(auto i:mp){
            if(i.first==i.second && i.first>x)  x = i.first;
        }        
        return x;
    }
};