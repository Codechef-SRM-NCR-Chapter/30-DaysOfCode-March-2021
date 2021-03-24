class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        unordered_map<int, int>::iterator it;
        
        int count = 0;
        
        for (int i:nums) {
            map[i]++;
        }
        
        for (it = map.begin(); it != map.end(); it++) {
            if (it->second == 1) {
                count += it->first;
            }
        }
        
        return count;
    }
};
