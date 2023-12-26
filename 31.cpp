#include<iostream>
#include<vector>
using namespace std;

string allowedMove(int board[4][4], int visited[4][4], int curr_x, int curr_y){
        
        //string variable to store allowed direction movement
        string allowed = "" ;

        //finding all possible movement 
        if(board[curr_x][curr_y-1] == 1 && visited[curr_x][curr_y-1] == 0 && curr_x < 4 && curr_y-1 < 4 && curr_x >= 0 && curr_y-1 >= 0){
            allowed += 'L';
        }
        if(board[curr_x][curr_y+1] == 1 && visited[curr_x][curr_y+1] == 0 && curr_x < 4 && curr_y+1 < 4 && curr_x >= 0 && curr_y+1 >= 0){
            allowed += 'R';
        }
        if(board[curr_x-1][curr_y] == 1 && visited[curr_x-1][curr_y] == 0 && curr_x-1 < 4 && curr_y < 4 && curr_x-1 >= 0 && curr_y >= 0){
            allowed += 'U';
        }
        if(board[curr_x+1][curr_y] == 1 && visited[curr_x+1][curr_y] == 0 && curr_x+1 < 4 && curr_y < 4 && curr_x+1 >= 0 && curr_y >= 0){
            allowed += 'D';
        }

        //returning all allowed movement
        return allowed;
}

void ratInMage(int board[4][4], vector<string> &ans, string path, int visited[4][4], int curr_x, int curr_y){

    // base case
    if(curr_x == 3 && curr_y == 3){
        ans.push_back(path);
        return ;
    }

    // driver case

    string allowed = allowedMove(board, visited, curr_x, curr_y);

    for(int i=0 ; i<allowed.length(); i++){
        switch(allowed[i]){
            case 'L' :  curr_y -= 1; 
                        visited[curr_x][curr_y] = 1;
                        path += 'L';
                        ratInMage(board, ans, path, visited, curr_x, curr_y);
                        path = path.substr(0,path.length()-1);
                        visited[curr_x][curr_y] = 0;
                        curr_y += 1;
                        break;

            case 'R' :  curr_y += 1; 
                        visited[curr_x][curr_y] = 1;
                        path += 'R';
                        ratInMage(board, ans, path, visited, curr_x, curr_y);
                        path = path.substr(0,path.length()-1);
                        visited[curr_x][curr_y] = 0;
                        curr_y -= 1;
                        break;

            case 'U' :  curr_x -= 1;
                        visited[curr_x][curr_y] = 1; 
                        path += 'U';
                        ratInMage(board,ans,path,visited,curr_x,curr_y);
                        path = path.substr(0,path.length()-1);
                        visited[curr_x][curr_y] = 0;
                        curr_x += 1;
                        break;

            case 'D' :  curr_x += 1;
                        visited[curr_x][curr_y] = 1; 
                        path += 'D';
                        ratInMage(board,ans,path,visited,curr_x,curr_y);
                        path = path.substr(0,path.length()-1);
                        visited[curr_x][curr_y] = 0;
                        curr_x -= 1;
                        break;
        }
    }

}

vector<string> finPath(int arr[4][4]){

    //variable initialization
    vector<string> ans;
    int init_x = 0;
    int init_y = 0;
    int visited[4][4] = {0};
    string path = "";

    if(arr[init_x][init_y] == 0)
        return ans;
    
    //recursive function call
    ratInMage(arr,ans,path,visited,init_x,init_y);

    //returning the path
    return ans; 
}

void print(vector<string> v){
    for(auto i: v){
        for(int j=0; j<i.length(); j++){
            cout << i[j] << " " ;
        }
        cout << endl;
    }
}

int main(){

    int board[4][4] = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    print(finPath(board));
    
}