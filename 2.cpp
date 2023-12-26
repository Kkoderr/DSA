#include <iostream>

using namespace std;

int main()
{   
    for(int i=1 ; i<=4 ; i++){
        int space = 4-i ;
        for(int j=1 ; j<=4 ; j++){
            if(space){
                cout << " " ;
            }else{
                cout << i ;
            }
        }
        cout << endl ;
    }
}
