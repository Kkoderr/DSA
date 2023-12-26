#include<iostream>
using namespace std;

class Human{
    public :
        int age;
        int weight;
        int height;

    public:
        int getage(){
            return this->age;
        }
};

class Male: public Human{ 
    public:
        string color;

        void sleep(){
            cout << "Male sleeping" << endl;
        }
};

class Animal{
    public :
        int age;
        int weight;
    
    public :
        void makeSound(){
            cout << "!!" << endl;
        }
};

class Homosapiens{
    public :
        string color;
    
    public :
        void speak(){
            cout << "Speaking!!" << endl;
        }
};

class Dog: public Animal{  //Single inheritance
    public : 
        void walks(){
            cout << "Walks on four" << endl;
        }
};

class GermanShepard: public Dog{ // Multi-level Inheritance

};

class Pitbull: public Dog{

};

class Hybrid: public Animal , public Homosapiens{ // Multiple Inheritance

};

class A{
    public :
        void sayHello(){
           cout << "Hello Bhavook" << endl; 
        } 
        // Method overloading needs change in input argument , not in signature of function
        void sayHello(string name){
            cout << "Hello " << name << endl;
        }
};

class B{
    public: 
        int a;
        int b;

        int add(){
            return a+b;
        }
        //Operator overloading
        void operator+ (B &obj){
            int value1 = this->a;
            int value2 = obj.a;
            cout << "Output: " << value2-value1 << endl;
        }
};

// Method Overriding
class Cat{
    public: 
        void speak(){
            cout << "meoww... | > < | ";
        }
};
class PersianCat: public Cat{
    public:
        void speak(){
            cout << "MEOW.... | O O | ";
        }
};


int main(){

    //"ENCAPSULATION"
    //Encapsulation -> wrapping up of data members and functions
    // Fully Encapsulated class -> when all data member are
    // private marked.
    //Advantage : Data Hide - Security incr.
    // Code Reusability

    //"INHERITANCE"
    //Inheriting parents behaviour(method) and properties(members)
    Male obj;
    obj.age = 20;
    cout << obj.getage() << endl;
    cout << endl;

    //Type of inhertiance:
    //Single, Multiple, Multi-level, Hybrid, Hierarchial
    Dog d;
    d.makeSound();

    cout << endl;
    
    GermanShepard g;
    g.walks();
    g.makeSound();

    cout << endl;

    Hybrid h;
    h.speak();
    h.makeSound();

    cout << endl;

    //"POLYMORPHISM"
    //Two types of polymorphism : Compile-time , Run-time
    //Compile-time (static polymorphism)-> Function overloading, Operator overloading
    //Operator overloading cant be performed on ['::', '*', '.', '?:']
    A a;
    a.sayHello();
    a.sayHello("Nandini"); //Method overloading

    cout <<endl;

    B b1, b2;
    b1.a =10 ;
    b2.a =13 ;
    b1 + b2 ; //Operator overloading

    cout << endl;

    //Run-time (dynamic polymorphism) -> Method overriding
    PersianCat pc;
    pc.speak();

    //Abstraction -> Implementation hiding 
    
    return 0;
}