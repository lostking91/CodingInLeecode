/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution.
Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];

            //if numberToFind is found in map, return them
            if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
                result.push_back(hash[numberToFind]);
                result.push_back(i);            
                return result;
            }

            //number was not found. Put it in the map.
            hash[nums[i]] = i;
        }
        return result;        
    }
};
//2class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> v = numbers;
        sort(v.begin(), v.end());
        int left = 0;
        int right = (int) v.size() - 1;
        int middle;
        while (left < right) {
            int middle = v[left] + v[right];
            if (middle == target) break;
            if (middle < target) 
                ++left; 
            else 
                --right;
        }

        int result_index1;
        int result_index2;
        for (int i=0;i<v.size();++i) {
            if (numbers[i] == v[left]) { 
                result_index1 = i; 
                break;
            }
        }

        for (int i=(int)v.size()-1;i >= 0;--i) {
            if (numbers[i] == v[right]) {
                result_index2 = i; 
                break; 
            }
        }

        if (result_index1 > result_index2) 
            swap(result_index1,result_index2);

        vector<int> result {result_index1 + 1, result_index2 + 1};
        return result;
    }
};
