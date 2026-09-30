class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> temp = board;

        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                int live = 0;

                // Check 8 neighbours
                for (int k = 0; k < 8; k++) {

                    int ni = i + dr[k];
                    int nj = j + dc[k];

                    if (ni >= 0 && ni < n &&
                        nj >= 0 && nj < m &&
                        board[ni][nj] == 1) {

                        live++;
                    }
                }

                // Current cell is alive
                if (board[i][j] == 1) {

                    if (live < 2 || live > 3) {
                        temp[i][j] = 0;
                    }
                }

                // Current cell is dead
                else {

                    if (live == 3) {
                        temp[i][j] = 1;
                    }
                }
            }
        }

        board = temp;


    }
};