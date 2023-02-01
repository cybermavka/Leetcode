#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i]==nums[i-1]){
                nums.erase(nums.cbegin()+i);
                i--;
            }
        }
        return nums.size();
    }
};