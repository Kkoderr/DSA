#include <iostream>

using namespace std;
/*
int main()
{   
    int n ;
    cin >> n ;
    int row=1 ;
    while(row<=n){
        int j=1 ;
        while(j<=n+1-row){
            cout<< j++ ;
        }
        
        int stars= 2*(row-1) ;
        while(stars){
            cout << "*" ;
            stars -= 1 ;
        }
        
        int m=n+1-row;
        while(m>0){
            cout << m-- ;
        }
        row += 1 ;
        cout << endl ;
        
    }
    
}
*/

int main(){
    int n;
    cin >> n;
    n=2*n;
    int m= n;
    int con =0;
    while(n-1!=0){
        int p=m/2;
        int temp1=con;
        for(int i=0; i<m-1;i++){
            if(i>m-2-con){
                p++;
            }
            cout << p << " ";
            if(temp1){
                p--;
                temp1--;
            }    
        }
        cout << endl;
        con++;
        n--;
    }
}