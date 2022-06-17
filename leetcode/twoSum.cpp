// APProach.1 O(n^2) + O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =  nums.size();
        for(int i = 0 ; i < n-1 ; i++)
        {
            for(int j = i + 1; j < n ; j++){
                if(nums[i] + nums[j] == target)
                    return {i , j} ;
            }
        }
             return {};
        }
};


//  Approach-2 O(N) + O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> ump;
        for(int i = 0 ; i < n ; i++){
            int x = nums[i];
            int y = target-x;
            if(ump.find(y) != ump.end()){
                return {i , ump[y]}
            }
            ump[nums[i]] = i;
        }
        return {};
    }
};

// Approach-3 O(nlogn) + O(n) => two pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v;
        for(int i = 0 ; i < n ; i++) v.push_back({nums[i] , i});
        sort(v.begin() , v.end());
        int l = 0 , h = nums.size()-1;
        while(l < h){
            int ans = v[l].first + v[h].first;
            if(ans == target) return {v[l].second , v[h].second};
            else if(ans>target) h--;
            else s++;
        }
        return {};
    }
};