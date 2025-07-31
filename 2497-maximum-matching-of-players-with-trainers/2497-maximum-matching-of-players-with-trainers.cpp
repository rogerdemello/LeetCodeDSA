class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        ranges::sort(players);
        ranges::sort(trainers);

        int i = 0, j = 0, count = 0;

        while (i < players.size() && j < trainers.size()) {
            if (players[i] <= trainers[j]) {
                count++;
                i++;
                j++;
            }
            else  j++;
        }
        return count;
    }
};
