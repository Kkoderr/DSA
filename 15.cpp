// STL
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>


using namespace std;

int main(){
    /*array<int,4> a ={1,2,3,4};
    int size = a.size();
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout<<"element at 2 pos " << a.at(2) << endl;
    cout<< "Empty or not " << a.empty() << endl;

    cout << "First element " << a.front() << endl;
    cout << "Last element "<<a.back() << endl; 
*/
/*   vector<int> a ;
    cout << "Capacity of vector " <<a.capacity() << endl;
    a.push_back(1);
    cout << "Capacity of vector " <<a.capacity() << endl;
    a.push_back(2);
    cout << "Capacity of vector " <<a.capacity() << endl;
    a.push_back(3);
    cout << "Capacity of vector " <<a.capacity() << endl;
    cout << "ele at 2 pos " << a.at(2) << endl;
    cout << "front " << a.front() << endl;
    cout << "back" << a.back() << endl;

    cout << "Before pop " <<endl;

    cout << "Capacity " << a.capacity() << endl;
    cout << "Size " << a.size() << endl;

    for(int i :a ){
        cout << i << " ";
    }cout << endl;
    a.pop_back();
    for(int i :a ){
        cout << i << " ";
    }cout << endl;

    vector<int> c(5,1);
    for(int i :c ){
        cout << i << " ";
    }cout << endl;
    */

/*
   deque<int> d;
   d.push_back(8);
   d.push_front(3);
    d.push_back(4);

   for(int i :d){
    cout << i << " ";
   }cout << endl;

   //d.pop_back();
    //d.pop_front();

   /for(int i :d){
    cout << i << " ";
   }cout << endl;
/
    cout << "ele at 1 pos " << d.at(1) << endl ;
    cout << d.size() <<endl;
    d.erase(d.begin(), d.begin()+1);
    cout << d.size() <<endl;  
*/

    /*list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l){
        cout << i << " ";
    }cout << endl;

    list<int> n(l);
    list <int> w(5,100);
    for(int i :n){
        cout << i << " ";
    }cout << endl;
    for(int i :w){
        cout << i << " ";
    }cout << endl;

    l.erase(l.begin());
    cout << "After erase " << endl ;
    for(int i :l){
        cout << i << " ";
    }cout << endl;

    cout << "size of list " << l.size() << endl;
    */

   /*stack<string> s;
   s.push("Bhavook");
   s.push("nandini");
   s.push("Vishal");

   cout << "Top ele -> " << s.top() <<endl;
   s.pop();
   cout << "top ele -> " <<  s.top() << endl;

   cout << "size of stack " << s.size()<<endl;
   cout << "Empty or not " << s.empty() << endl;
*/
    /*queue<string> q;
    q.push("Bhavook");
    q.push("Nandini");
    q.push("Vishal");

    cout << "First ele -> " << q.front()<< endl;
    q.pop();
    cout << "First ele -> " << q.front() << endl;
*/
/*
    //max heap
    priority_queue<int> max_pq ;
    //min heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    max_pq.push(1);
    max_pq.push(3);
    max_pq.push(4);
    int n =max_pq.size();
    for(int i=0 ; i<n;i++){
        cout << max_pq.top()<<" ";
        max_pq.pop();
    }cout << endl;
    
    min_pq.push(1);
    min_pq.push(4);
    min_pq.push(2);
    int m =min_pq.size();
    for(int i=0; i<m; i++){
        cout << min_pq.top() << " ";
        min_pq.pop();
    }cout << endl;
    */

   set<int> s;
   s.insert(2);
   s.insert(5);
   s.insert(5);
   s.insert(5);
   s.insert(7);
   s.insert(9);
   s.insert(9);
   for(auto i :s){
    cout << i << " ";
   }cout << endl;
   set<int> :: iterator it = s.begin();
   it++;
   s.erase(it);

   for(auto i :s){
    cout << i << " ";
   }cout<<endl;

   cout << "5 is present or not -> "<<s.count(5);
    cout << endl; 
   set<int> :: iterator itr =s.find(7);
   for(auto it =itr; it!=s.end();it++){
    cout << *it << " ";
   }cout << endl;




}