# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
unordered_map can store can previous occurance as we iterate we maintain window 

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n) best case O(k)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0, j=0;
        while(j<nums.size()){
            if(abs(j-i)<=k){
                mp[nums[j]]++;
                if(mp[nums[j]]>1){
                    return true;
                }
                j++;
            }
            if(abs(j-i)>k){
                mp[nums[i]]--;
                i++;
            }
        }
        return false;
    }
};
```
