#include<iostream>
using namespace std;

int main(){
    /*int num = 5;
    cout <<"value of num   : " << num << endl;

    cout <<"address of num : "<< &num << endl;

    int *ptr = &num;
    cout << "value of (*ptr): " << *ptr <<endl;
    cout << "value of (ptr) : " << ptr << endl;

    cout << "size of num : " << sizeof(num) << endl;
    cout << "size of pointer : " << sizeof(ptr) << endl;

    char a = 'a';
    char *ptr2 = &a;
    cout << "size of 2 pointer : " << sizeof(ptr2) ;*/

    /*
    int *p = 0; // a null pointer which on access gives segmentation fault.
    int i=5;
    p = &i;
    int *ptr = &i;
    cout << p << " | " << ptr << endl ;
    
    int num = 5;
    int a = num ;
    a++;
    cout << "a : " << a << " | num : " << num << endl ;
    
    int num2 = 6;
    int *ptr2 = &num2;
    (*ptr2)++;
    cout << "ptr2 : " << *ptr2 << " | num2 : " << num2 << endl ;
    */

    /*
    // copying pointers
    int num = 10;
    int *p = &num;
    int *q = p;
    cout << "p : " << p ;
    cout << endl;
    cout <<  "q : " << q ;
    */
   /*
    int arr[10] = {23,122,41,67};
    
    cout << arr << endl; // simple 'arr' gives address of first element of array.
    cout << *arr << endl;
    cout << *arr +1 << endl;
    cout << *(arr+1) << endl;
    cout << *(arr)+1 << endl;
    cout << arr[2] << endl;
    cout << *(arr+2) << endl;
    cout << arr[2] << "  " << 2[arr] << endl;
    // arr[i] = *(arr+i) 
    // i[arr] = *(i+arr)
    */
   /*
   int temp[10];
   cout << sizeof(temp) << endl;

    int *ptr= &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    //mapping of symbol table cannot be changed.
    int arr[10] = {0};
    //arr = arr +1;  // this will produce error.

   int *ptr = &arr[10] ;
   ptr = ptr+1; // here there will be no error as we are changing the value stored 
   //in ptr pointer variable, not the value symbol table. (The increment will be of 4.)
    */

   /*
    char ch[6] = "abcde";
    cout << ch << endl; // here simple "ch" cannot print the address of first value
    // "ch" will print the whole character array.

    char *ptr = &ch[0];
    cout << ptr << endl; // implementatin of char array is different in c++
    // here ptr will give the whole char array .
    */
   /*
    char temp = 's';
    char *ptr = &temp;
    cout << ptr << endl;
    */
   /*
   char ch[6] = "abcde" ;
   char *c = "abcde" ;//it is risky cause here 'c' will be pointing to a temporary
   // memory allocation for "abcde".
   */
}