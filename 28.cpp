#include <iostream>
#include<vector>
using namespace std;

/*

void powerSet(int *arr,vector<int>temp_set, vector<vector<int>> &power_set, int index){
    if(index >= 3){
        power_set.push_back(temp_set);
        return ;
    }
    powerSet(arr,temp_set,power_set,index+1);
    temp_set.push_back(*(arr+index));
    powerSet(arr,temp_set,power_set,index+1);
}


void print(vector<vector<int>> set){
    for(auto i: set){
        for(auto j : i){
            cout << j;
        }
        cout << " ";
    }
}

vector<vector<int>> solve(int *arr){
    vector<vector<int>> power_set ;
    vector<int> temp;
    int index=0;
    powerSet(arr,temp,power_set,index);
    return power_set;
}

int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);
    print(solve(arr));
}
*/

void subStrings(string str, vector<char> temp, vector<vector<char>> &substring,int index){
    if(index >= str.length()){
        substring.push_back(temp);
        return ;
    }
    subStrings(str,temp,substring,index+1);
    temp.push_back(str[index]);
    subStrings(str,temp,substring,index+1);
}

vector<vector<char>> solve(string str){
    vector<vector<char>> substrings;
    vector<char> temp;
    int index =0 ;
    subStrings(str,temp,substrings,index);
    return substrings;
}

void print(vector<vector<char>> substrings){
    for(auto i: substrings){
        for(auto j : i){
            cout << j;
        }
        cout << " ";
    }
}

int main(){
    string str = "abcd";
    print(solve(str));

}