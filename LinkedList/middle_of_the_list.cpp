//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//solution : 

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode*temp = head;
//         ListNode*temp2;
//         int c = 0;
//         while(temp != NULL){
//             c++;
//             temp = temp->next;
//         }
//         int m = (c/2)+1;
//         m--;
//         int k = 0;
//         while(k<m){
//             head = head->next;
//             k++;
//         }
//         temp2 = head;
//         return temp2;
//     }
// };