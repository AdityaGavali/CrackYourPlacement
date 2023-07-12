//problem link : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

//solution :

// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         ListNode*temp = head;
//         int c = 0 , v = 0;
//         while(temp != NULL){
//             c++;
//             temp = temp->next;
//         }
//         c--;
//         while(head != NULL){
//            v += (head->val)*(pow(2  , c));
//            head = head->next;
//            c--;
//         }
// return v;
//     }
// };