class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<int> q;
        for(int m=0; m<matrix.size(); m++){
            for(int n=0; n<matrix[0].size(); n++){
                if(matrix[m][n]==0){
                    q.push(m);
                    q.push(n);
                }
            }
        }
        while(!q.empty()){
            int i=q.front();
            q.pop();
            int j=q.front();
            q.pop();
            for(int k=0; k<matrix.size(); k++){
                for(int l=0; l<matrix[0].size(); l++){
                    if(k==i || l==j){
                        matrix[k][l]=0;
                    }
                }
            }
        }
        for(int a=0; a<matrix.size(); a++){
            for(int b=0; b<matrix[0].size(); b++){
                cout<<matrix[a][b];
            }
        }
    }
};
