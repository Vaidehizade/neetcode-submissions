class Solution {
public:
bool isValid(vector<vector<char>> &board, int row, int col , int val){
    for(int j=0; j<9; j++){
        if(j!=col && board[row][j] == val){
            return false;
        }
    }

    for(int i=0; i<9; i++){
        if(i!=row && board[i][col] == val){
            return false;
        }
    }
    //valid grid

    // check 3x3 box

        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;
        for(int i= sr; i< sr+3; i++){
            for(int j= sc ; j< sc+3; j++){
                if((i != row || j != col) && board[i][j] == val){
                    return false;
                }
            }
        }
        return true;

}
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j] != '.'){
                    //check on row
                    //check on col
                    //check on grid
                    if(!isValid(board, i, j, board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
