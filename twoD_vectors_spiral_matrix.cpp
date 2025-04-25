// Problem 54 on leetCode  --> and also Asked in interview (many times)

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat){
  int m = mat.size() , n = mat[0].size();
    int stRow = 0 , stCol = 0, endRow = m-1 , endCol = n-1; 
    vector<int> ans;
    while (stRow <= endRow && stCol <= endCol){
        // top
         for(int j = stCol ; j <= endCol ; j++){
             ans.push_back(mat[stRow][j])  ;
         }
        // right
         for (int i = stRow+1; i <= endRow ; i++){
             ans.push_back(mat[i][endCol])  ;
         }
        // bottom
        for(int j = endCol-1 ; j>= stCol ; j--){
            if(stRow == endRow){
                break;
            }
            ans.push_back(mat[endRow][j])  ;
        }  
        // left
        for(int i = endRow-1 ; i >= stRow+1 ; i--){
            if(stCol == endCol){
                break;
            }
            ans.push_back(mat[i][stCol]) ;
        }
    
            stRow++ ;  endRow-- ; stCol++; endCol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>>mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; 
    cout << "Spiral matrix : ";                                
   
    for(int val:spiralOrder(mat)){
        cout << val << " ";
    }
    return 0;
}