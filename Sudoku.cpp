#include <iostream>
#include <cmath>
using namespace std;

bool solveSub(int mat[][9],int i,int j,int no){

    // for row and column
    for(int k=0;k<9;k++){
        if(mat[k][j]==no or mat[i][k]==no){
            return false;
        }
    }

    // for subgrid
    int sx=(i/3)*3;
    int sy=(j/3)*3;
    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(mat[x][y]==no){
                return false;
            }
        }
    }return true;

}

bool solveSudoku(int mat[][9],int i,int j,int n){
    // base case
    if(i==n){
        // the answer is correct and we will print the array
        for(int x=0;x<9;x++){
            for(int y=0;y<9;y++){
            // if(mat[x][y]==no){
                // return false;
            
            cout<<mat[x][y]<<" ";
        }cout<<endl;
        }

        return true;
    }

    // corner case
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }
    for(int k=1;k<=n;k++){
        if(solveSub(mat,i,j,k)){
            mat[i][j]=k;
            bool solvetheques=solveSudoku(mat,i,j+1,n);
            if(solvetheques==true){
                return true;
            }
        }
    }mat[i][j]=0;
    return false;
    
}

int main(){
    int n=9;
    int mat[9][9]=
    {{5,3,0,0,7,0,0,0,0},
    {6,0,0,1,9,5,0,0,0},
    {0,9,8,0,0,0,0,6,0},
    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},
    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,0,0,0,8,0,0,7,9}};
    if(!solveSudoku(mat,0,0,n)){
        cout<<"No solution exists"<<endl;
    }
    return 0;
}
