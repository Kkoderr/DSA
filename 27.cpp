#include<iostream>
using namespace std;

void reverse(string &x ,int pos=0){
    if(pos>=x.length()/2)
        return;
    swap(x[0+pos],x[x.length()-pos-1]);
    reverse(x,pos+1);
}

bool checkPalindrome(string str,int pos=0){
    if(pos>=str.length()/2)
        return 1;
    else if(str[0+pos]!=str[str.length()-1-pos])
        return 0;
    else
        return checkPalindrome(str,pos+1);    
}

int exp(int x, int n){
    if(n==0)
        return 1;
    int ans = exp(x,n/2);
    ans*=ans;
    if(n&1)
        ans*=x;
    return ans;
}

void bubbleSort(int* arr, int n){
    if(n==0||n==1)
        return;
    for(int i=1; i<n; i++){
        if(*(arr+i) < *(arr+i-1))
            swap(*(arr+i),*(arr+i-1));
    }
    bubbleSort(arr,n-1);
}

void selectionSort(int* arr, int n, int i=0){
    if(i==n-1)
        return;
    int min = i;
    for(int j=i+1; j<n; j++){
        if(*(arr+min)>*(arr+j))
            min =j;
    }
    swap(*(arr+min),*(arr+i));
    selectionSort(arr,n,i+1);
}

void insertionSort(int *arr, int size, int n=1){
    if(n>size){
        return;
    }
    for(int i=n-1 ; i>=0; i--){
        if(*(arr+i)>*(arr+i+1))
            swap(*(arr+i),*(arr+i+1));
        else{break;}
    }
    insertionSort(arr,size,n+1);
}

void merge(int arr[], int low, int mid, int high){

    int left_arra_size = mid-low+1;
    int right_arr_size = high-mid;

    int* left_arr = new int[left_arra_size];
    int* right_arr = new int[right_arr_size];

    int arr_index =0;
    for(int i=0; i<left_arra_size; i++)
        left_arr[i]=arr[arr_index++];
    for(int i=0; i<right_arr_size; i++)
        right_arr[i] = arr[arr_index++];

    arr_index =0;
    int left_index=0, right_index=0;

    while(left_index<left_arra_size && right_index<right_arr_size){
        if(left_arr[left_index]<right_arr[right_index])
            arr[arr_index++] = left_arr[left_index++];
        else    
            arr[arr_index++] = right_arr[right_index++];
    }

    while(left_index<left_arra_size)
        arr[arr_index++] = left_arr[left_index++];

    while(right_index<right_arr_size)
        arr[arr_index++] = right_arr[right_index++];
    
    delete []right_arr;
    delete []left_arr;
}

void mergeSort(int arr[], int low, int high){
    int mid = low + (high - low)/2;
    if(low>= high)
        return ;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high);
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int partition(int* arr, int start,int end){
    int pivot = start;
    int count=0;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<arr[pivot])
            count++;
    }
    pivot = start+count;
    swap(arr[start], arr[pivot]);
    int i=start, j = end;
    while(i<pivot && j>pivot){
        while(arr[i]<=arr[pivot])
            i++;
        while(arr[j]>arr[pivot])
            j--;
        if(i<pivot && j>pivot)
            swap(arr[i++],arr[j--]);
    }
    return pivot;

}

void quickSort(int* arr, int start, int end){
    if(start>=end)
        return ;

    int p = partition(arr,start,end);
    quickSort(arr,start, p-1);
    quickSort(arr,p+1,end);


}

int main(){
    int arr[]={5,2,7,8,3,6,2};
    quickSort(arr,0,6);
    //mergeSort(arr,0,6);
    //insertionSort(arr,7);
    //selectionSort(arr,7);
    //bubbleSort(arr,7);
    printArray(arr,6);
        

    //cout << exp(2,7);

    /*
    string str = "racecar";
    cout << checkPalindrome(str);
    */

    /*
    string str = "My name is bhavook";
    reverse(str);
    cout << str;
    */
}