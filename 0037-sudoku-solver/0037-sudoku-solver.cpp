class Solution{
public:
    void solveSudoku(vector<vector<char>>& b){
        solve(b);
    }
private:
    bool solve(vector<vector<char>>& b){
        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                if(b[r][c]=='.'){
                    for(char d='1'; d<='9'; d++){
                        if(isValid(b,r,c,d)){
                            b[r][c]=d;
                            if(solve(b)){
                                return 1;
                            }
                            b[r][c]='.';
                        }
                    }
                    return 0;
                }
            }
        }
        return 1;
    }
    bool isValid(vector<vector<char>>& b,int r,int c,char d){
        for(int i=0; i<9; i++){
            if(b[r][i]==d){
                return 0;
            }
            if(b[i][c]==d){
                return 0;
            }
            int br=3*(r/3)+i/3;
            int bc=3*(c/3)+i%3;
            if(b[br][bc]==d){
                return 0;
            }
        }
        return 1;
    }
};
