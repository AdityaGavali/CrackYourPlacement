//problem : https://leetcode.com/problems/linked-list-cycle/description/

//solution : 

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL || head->next == NULL){
//             return false;
//         }
//         ListNode *slow = head , *fast = head;
//         while(fast->next != NULL && fast->next->next != NULL){
//               fast = fast->next->next;
//               slow = slow->next;
//               if(fast == slow)return true;
//         }
//         return false;
//     }
// };