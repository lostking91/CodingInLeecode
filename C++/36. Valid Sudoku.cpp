/*
Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
*/
// https://leetcode.com/discuss/67958/c-not-short-but-clear-solution
// https://leetcode.com/discuss/57131/share-my-c-solution
class Solution {
private:
    bool isValidRow(vector<vector<char>>& board, int i)
    {
        vector<int> myHashTable(9, 0);
        for(int j=0; j<board[i].size(); j++)
            if(board[i][j] <= '9' && board[i][j] >= '1')
                myHashTable[board[i][j]-'1']++;

        for(int index=0; index<9; index++)
            if(myHashTable[index]>1)
                return false;

        return true;
    }

    bool isValidColumn(vector<vector<char>>& board, int j)
    {
        vector<int> myHashTable(9, 0);
        for(int i=0; i<board.size(); i++)
            if(board[i][j] <= '9' && board[i][j] >= '0')
                myHashTable[board[i][j]-'1']++; 

            for(int index=0; index<9; index++)
                if(myHashTable[index]>1)
                    return false;

        return true;
    }

    bool isValidGrid(vector<vector<char>>& board, int i, int j)
    {
        vector<int> myHashTable(9, 0);
        for(int row=i-1; row<=i+1; row++)
            for(int col=j-1; col<=j+1; col++)
                if(board[row][col] <= '9' && board[row][col] >= '1')
                    myHashTable[board[row][col]-'1']++;

        for(int index=0; index<9; index++)
            if(myHashTable[index]>1)
                return false;

        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        if(m==0)
            return true;
        int n = board[0].size();
        if(n==0)
            return true;

        int i, j;


        for(i=0; i<m; i++)
            if(!isValidRow(board, i))
                return false;

        for(j=0; j<n; j++)
            if(!isValidColumn(board, j))
                return false;


        for(i=1; i<m-1; i=i+3)
            for(j=1; j<n-1; j=j+3)
                if(!isValidGrid(board, i, j))
                    return false;


        return true;
    }
};