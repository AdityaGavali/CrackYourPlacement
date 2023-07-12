//Set Matrix Zeroes problem link : https://leetcode.com/problems/set-matrix-zeroes/description/
// solution : 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
      vector<bool>v_i(matrix.size(), false) , v_j(matrix[0].size(),false);
      vector<vector<int>>v;
      for(int i = 0;i<matrix.size();i++){
          for(int j =0; j<matrix[0].size();j++){
              if(matrix[i][j] == 0){
                    v_i[i] = true;
                    v_j[j] = true;
              }
          }
          
      }
      for(int i = 0;i<matrix.size();i++){
          vector<int>a;
          for(int j = 0;j<matrix[0].size();j++){
              if(v_i[i] == true || v_j[j] == true){
             a.push_back(0);
              }
              else{
                  a.push_back(matrix[i][j]);
              }
          }
          v.push_back(a);
      }
       for(int i = 0;i<matrix.size();i++){
          for(int j =0; j<matrix[0].size();j++){
             matrix[i][j] = v[i][j];
          }
          
      }
    }
};