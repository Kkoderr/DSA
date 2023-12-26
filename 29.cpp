#include<iostream>
#include<vector>
using namespace std;

string key(char n){
    string char_access = "";
    switch(n){
        case '2' : char_access = "abc";
                   break;
        case '3' : char_access = "def";
                   break;
        case '4' : char_access = "ghi";
                   break;
        case '5' : char_access = "jkl";
                   break;
        case '6' : char_access = "mno";
                   break;
        case '7' : char_access = "pqrs";
                   break;
        case '8' : char_access = "tuv";
                   break;
        case '9' : char_access = "wxyz";
                   break;
        case '0' : char_access = "   ";
                   break;
    }
    return char_access;
}

void solve(string n, string output, vector<string>& ans, int index){
    if(index >= n.length()){
        ans.push_back(output);
        return ;
    }
    string keys = key(n[index]);

    solve(n,output+keys[0],ans,index+1);

    solve(n,output+keys[1],ans,index+1);

    solve(n,output+keys[2],ans,index+1); 
}

vector<string> combination(string n){
    vector<string> ans;
    int index=0;
    string output;
    solve(n,output,ans,index);
    return ans;
}

void print(vector<string> strings){
    for(auto i: strings){
        cout << i << " " ;
    }
}

int main(){
    string str = "34";
    print(combination(str));
}