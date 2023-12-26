#include<iostream>
#include<vector>
using namespace std;

// Book Allocation problem

bool isPossible(int books[],int size,int student,int mid){
    int studentCount=1;
    int pageSum = 0;
    for(int i=0; i<size; i++){
        if (pageSum+books[i] < mid){
            pageSum+=books[i];
        }else{
            studentCount++;
            if(books[i]>mid || studentCount>student){
                return false;
            }
            pageSum = books[i];
        }

    }
    return true;
}

int bookAllocate(int books[], int size, int student){
    int start=0;
    int end=0;
    int ans=0;
    for(int i=0; i<size; i++){
        end+=books[i];
    }
    int mid = start + (end-start)/2;
    while(start<=end){
        if(isPossible(books,size,student,mid)){
            ans =mid;
            end=mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
}

int main(){
    int books[]={10,20,30,40};
    int student =3;
    int size = sizeof(books)/sizeof(int);
    cout << bookAllocate(books,size,student) ; 

}