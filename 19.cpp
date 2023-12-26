#include<iostream>
#include<vector>
using namespace std;

bool isPrsesent(int arr[][3], int target, int row, int col){
    for(int i=0 ; i<row; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[][3],int row,int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        cout << "Sum of " << i+1 << " row is : "<< sum << endl;
    }
}

void colWiseSum(int arr[][3],int row,int col){
    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0; j<row; j++){
            sum+=arr[j][i];
        }
        cout << "Sum of " << i+1 << " column is : "<< sum << endl;
    }
}

int largestRowSum(int arr[][3], int row, int col){
    int max=0;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max =sum;
        }
    }
    return max;
}

void wavePrint(int arr[][3],int row, int col){
    for(int i=0; i<col; i++){
        if(i%2 == 0){
            for(int j=0; j<row; j++){
                cout << arr[j][i] << ' ';
            }
        }else{
            for(int j=row-1; j>=0; j--){
                cout << arr[j][i] << ' ';
            }
        }
    }
}

vector<int> spiralPrint(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    int total = row*col ;
    int count = 0;

    int start_row = 0 ;
    int end_row = row-1;
    int start_col = 0;
    int end_col = col-1;

    vector<int> ans;

    while(count<total){
        for(int j=start_col;count<total && j<end_col; j++){
            ans.push_back(matrix[start_row][j]);
            count++;
        }
        start_row++;
        for(int i=start_row;count<total && i<end_row; i++){
            ans.push_back(matrix[i][end_col]);
            count++;
        }
        end_col--;
        for(int j=end_col;count<total && j>=start_col;j--){
            ans.push_back(matrix[end_row][j]);
            count++;
        }
        end_row--;
        for(int i=end_row;count<total && i>=start_row;i--){
            ans.push_back(matrix[i][start_col]);
            count++;
        }
        start_col++;
        cout << "loop" << " ";
    }
    return ans;
}

void rotate(vector<vector<int>> &matrix){
    int size = matrix[0].size();
    vector<vector<int>> temp(size) ;
    for(int i=0; i<size; i++){
        for(int j=matrix.size()-1; j>=0; j--){
            temp[i].push_back(matrix[j][i]);
        }
    }
    matrix = temp;
}

// leetcode 
bool matrixBinarySearch(vector<vector<int>> &matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    
    int start =0 ;
    int end = row*col -1;
    
    int mid = start + (end-start)/2;
    while(start<end){
        int element = matrix[mid/col][mid%col];
        if(element==target){
            return 1;
        }else if(element > target){
            end = mid-1;
        }else{
            start = mid+1;
        }
        int mid = start +(end-start)/2;
    }
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start_row = 0;
        int start_col = 0;
        int end_row =matrix.size()-1;
        int end_col = matrix[0].size()-1;
        while(start_col<=end_col && start_row<=end_row && end_col>=0 && end_row>=0){
            if(matrix[start_row][end_col]==target){ 
                return 1;
            }
            if(matrix[start_row][end_col]>target && end_col>=start_col && start_row<=end_row){
                end_col--;
            }else if(matrix[start_row][end_col]<target && end_col>=start_col && start_row<=end_row){
                start_row++;
            }
        }
        return 0;
    }

void printVector(vector<int> v){
    for(int i : v){
        cout << i << " ";
    }
}

void printMatrix(vector<vector<int>> matrix){
    for(vector<int> i : matrix){
        for(int j :i){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    // int arr[3][3];
    //int arr[3][3]= {1,2,3,4,5,6,7,8,9};
    //int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

    /*for(int row=0; row<3; row++){
        for(int col=0 ; col<3 ; col++)
            cin >> arr[row][col];
    }
    */
   /*
    for(int row=0; row<3; row++){
        for(int col=0 ; col<3 ; col++)
            cout << arr[row][col] << " ";
        cout << endl ;
    }
    */

    //cout << "Is target element present in 2d array : " << isPrsesent(arr,22,3,3);

    //rowWiseSum(arr,3,3);
    
    //cout << "Maximum row sum is : "<< largestRowSum(arr,3,3);
    
    //wavePrint(arr,3,3);

    vector<vector<int>> mat(3);
    mat[0].push_back(1);
    mat[0].push_back(2);
    mat[0].push_back(3);
    mat[1].push_back(4);
    mat[1].push_back(5);
    mat[1].push_back(6);
    mat[2].push_back(7);
    mat[2].push_back(8);
    mat[2].push_back(9);
    printMatrix(mat);
    cout << searchMatrix(mat,8);
    return 0; 

}
