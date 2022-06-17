class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int CntZeros = 0;
        for(int i = 0 ; i < n ; i++){
            CntZeros += (nums[i] == 0);
        }
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
        }
        while(CntZeros--){
            ans.push_back(0);
        }
        // final answer
        for(int i = 0 ; i < n ; i++){
            nums[i] = ans[i];
        }
    }
};