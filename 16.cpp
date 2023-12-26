#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    /*map<int,string> m;

    m[1]="Bhavook";
    m[2]="Singh";
    m[3]="Chouhan";

    m.insert({5,"Praveen"});

    for(auto i : m){
        cout << i.first << " "<< i.second<<endl;
    }

    cout << "finding 3 -> "<< m.count(3) << endl;
    m.erase(3);

    for(auto i : m){
        cout << i.first << " "<< i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout << (*i).first << endl ;
    }*/

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout << "Finding the value 5, is it present -> " <<binary_search(v.begin(),v.end(),5);
    cout << endl;
    cout << "lower bound -> " << lower_bound(v.begin(), v.end(),5) - v.begin();
    cout << endl; 
    int a=10, b=20;
    cout << "max -> " << max(a,b) ;
    cout << endl;
    cout << "min -> " << min(a,b) ;
    cout << endl;
    
    swap(a,b);

    cout << "a -> "<< a <<endl << "b -> " << b ;

    string ab = "Bhavook";
    cout << "Original -> " << a << endl;
    reverse(ab.begin(), ab.end());
    cout << "Reverse -> " << a << endl;

    cout << "Before rotate " << endl;
    for(int i:v){
        cout << i << " ";
    }cout <<endl;
    rotate(v.begin(), v.begin()+2, v.end());
    cout << "After rotate" << endl;
    for(int i:v){
        cout << i << " ";
    }cout <<endl;


}