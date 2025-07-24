#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> numIndexMap;

        for (int i = 0; i < numbers.size(); i++) {
            int neededNumber = target - numbers[i];

            if (numIndexMap.find(neededNumber) != numIndexMap.end()) {
                return {numIndexMap[neededNumber], i};
            }

            numIndexMap[numbers[i]] = i;
        }

        return {};
    }
};
