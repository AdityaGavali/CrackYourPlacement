//problem link : https://leetcode.com/problems/subarray-sum-equals-k/description/
//my solution link : https://leetcode.com/problems/subarray-sum-equals-k/submissions/985376509/

//Code : 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
      int sum = 0;
        int count = 0;
      mp[sum] = 1;
     for(auto i : nums){
         sum = sum + i;
          int f = sum - k;
         if(mp.find(f) != mp.end()){
             count += mp[f];
}
         mp[sum]++;
}
        return count;
    }
};