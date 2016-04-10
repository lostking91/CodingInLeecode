/*
Given an integer array nums, find the sum of the elements between indices i and j (i ¡Ü j), inclusive.
Example:
Given nums = [-2, 0, 3, -5, 2, -1]
sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
*/
class NumArray {
public:
    NumArray(vector<int> &nums) {
        int summ = 0;
        for (int n : nums) {
            summ += n;
            acc.push_back(summ);
        }
    }

    int sumRange(int i, int j) {
        return acc[j+1]-acc[i];
    }
private:
    vector<int> acc={0};
};