class Solution {
public:
    bool solve(vector<vector<char>>&board,string word,int index,int i,int j){
          if(index == word.length()){
            return true;
          }
         if(i<0||i>=board.size()||
            j<0 || j>=board[0].size())  return false; 
            if(board[i][j]!=word[index]){
            return false;
          }
             char temp = board[i][j];
             board[i][j]='#';
        bool found = solve(board,word,index+1,i-1,j)||
                     solve(board,word,index+1,i+1,j)||
                     solve(board,word,index+1,i,j-1)||
                     solve(board,word,index+1,i,j+1);
        board[i][j] = temp;
        return found;
    
    
    }
    bool exist(vector<vector<char>>& board, string word) {
        int index =0;
        for(int i =0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(solve(board,word,index,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};