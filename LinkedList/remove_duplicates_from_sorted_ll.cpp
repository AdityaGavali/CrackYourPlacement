// problem link  : https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

// solution:

//  Haven't used head directly because in LL head and tail are two special Nodes , and we have head , we can access the whole LL simply by traversal ... That's why we change temp not head... Also at the end we have returned head because at this point temp = null , but head is till at its original place and can access the whole LL . Remember here, we have made changes in the original LL only. Hope it helps :)


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
      
//          ListNode *temp =head;
//         while(temp!=NULL && temp->next!=NULL){
//             if(temp->val==temp->next->val){
//                 ListNode* val = temp->next;
//                 temp->next = temp->next->next;
//                 delete(val);
//             }else temp = temp->next;
//         }
//         return head;   
//     }
// };