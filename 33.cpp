#include<iostream>
using namespace std;

class Hero{
    
    
    public:

    //constructor
    Hero(int health=100, int level=0){
        this->health = health;
        this->level = level;
        cout << "Constructor called" << endl;
    }
    //copy constructor
    Hero(Hero &temp){
        this->health = temp.health;
        this->level = temp.level;
    }

    //properties
    int health;
    int level;

    private :
    char rank; 
    
    //behaviour
    public:
    void print(){
        cout << "HEALTH " << health << endl;
        cout << "LEVEL " << level << endl;
    }

    //getter
    char getRank(){
        return rank;
    }
    //setter
    void setRank(char r){
        rank = r ;
    }

};

// there are three access modifier in cpp 
//1. public   2. private  3. protected
//by default all properties and behaviours of class are private


int main(){
    /*
    //creation of object
    Hero h1;
    cout << "Size : " << sizeof(h1) << endl;
    //the object will be allocated memory according to its 
    //properties that it contains , in case of empty class it
    //will have 1 byte of space allocated for the skaee of it

    Hero batman;
    batman.health = 100 ;
    batman.level = 100;
    batman.print();
    batman.setRank('S');
    cout << batman.getRank() << endl;
    */
    /*
    //static alllocation
    Hero a;
    //dynamic allocation
    Hero *b = new Hero;
    b->health = 100;
    b->level = 10;
    b->setRank('A');
    b->print();
    */
   /*
   Hero batman ;
   Hero *batman2 = new Hero;
   batman2->print();
    */

   //constructor copy
   //By default constructor
   /*
    Hero a(100,10);
    a.print();

    Hero b(a);
    b.print();
    */

    return 0;
}