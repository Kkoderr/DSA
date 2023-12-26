#include<iostream>
#include<vector>
using namespace std;

/*
//String Permutation
void solve(vector<string> &collection, string str, int index){
    if(index == str.length()){
        collection.push_back(str);
        return ;
    }
    for(int i=0+index; i<str.length();i++){
        string temp = str;
        swap(temp[index],temp[i]);
        solve(collection,temp,index+1);
    }
}

vector<string> generatePermutation(string &str){
    vector<string> collection;
    int index =0 ;
    solve(collection,str,index);
    return collection;
}

void print(vector<string> coll){
    for (auto i : coll){
        cout << i << " ";
    }
}

int main(){
    string str = "abc";
    print(generatePermutation(str));
}
*/

void solve(vector<vector<int>> &permutations, vector<int> nums, int index){

    //base case
    if(index == nums.size()){
        permutations.push_back(nums);
        return ;
    }
    
    //swaps
    for(int i=0+index; i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(permutations, nums, index+1);
        //backtrack
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>> permutation(vector<int> arr){

    //function call
    vector<vector<int>> permutations;
    int index =0 ;
    solve(permutations,arr,index);
    return permutations;
}

void print(vector<vector<int>> n){

    //print
    for(vector<int> i:n){
        for(int j:i){
            cout << j << " ";
        }
        cout<< endl;
    }
}

int main(){
    vector<int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(3);

    print(permutation(n));
}