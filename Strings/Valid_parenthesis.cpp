//problem link : https://leetcode.com/problems/valid-parentheses/

//solution : 
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> t; 
//         int j; 
        
//         for(auto j:s) 
//         {
            
//             if(j == '(' || j =='{' || j == '[')
//             {
//                 t.push(j);
//             }
//             else
//             {
                
//                 if(t.empty() || (t.top() == '(' && j != ')') || (t.top() == '{' && j != '}') || (t.top() == '[' && j != ']'))
//                 {
//                     return false;
//                 }
                
//                 t.pop();
//             }
//         }
        
//         return t.empty(); 
//     }
        
// };