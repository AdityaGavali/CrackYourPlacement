
// problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// solution :

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//       int mini = prices[0] , cost = 0 ,max_cost = 0;
//       for(int i= 1;i<prices.size();i++){
//           mini = min(mini , prices[i]);
//           cost = prices[i]-mini;
//           max_cost = max(cost,max_cost);
//       }
//       return max_cost;
//     }
// };