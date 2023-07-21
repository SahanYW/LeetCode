class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //productTotal is the product of all numbers in the nums array
        int productTotal = 1;
        bool hasNonZero = false, hasZero = false;

        //Calculate productTotal
        for (int i = 0; i < nums.size(); i++) {

            //Zero found
            if (nums[i] == 0 && !hasZero) { hasZero = true; continue; }

            //Non-zero found
            hasNonZero = true;
            productTotal *= nums[i];
        }

        //Set answers to each index of nums
        for (int i = 0; i < nums.size(); i++) {
            if (hasZero) {
                nums[i] = (nums[i] == 0 && hasNonZero) ? productTotal : 0;
            }
            else {
                nums[i] = productTotal / nums[i];
            }
        }

        return nums;
    }
};