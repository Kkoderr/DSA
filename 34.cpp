#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    int health ;
    char level ;

    public:
        char *name ;
        static int time_to_complete ; 

        Hero(){
        }

        Hero(Hero &h){
            this->name = new char[strlen(h.name)];
            strcpy(this->name,h.name);
            this->health = h.getHealth();
            this->level = h.getLevel();

        }
        
        void setName(char *n){
            name = new char[100];
            name = n;
        }
        void setLevel(char l){
            this->level = l;
        }
        void setHealth(int h){
            this->health = h;
        }
        int getHealth(){
            return this->health;
        }
        char getLevel(){
            return this->level;
        }

        void print(){
            cout << "[ Name : " << this->name;
            cout << ", Health : " << this->health;
            cout << ", Level : " << this->level << " ]";
            cout << endl; 
        }

        ~Hero(){
            cout << "Destructor called !" << endl;
        }
};

int Hero::time_to_complete = 100;

int main(){
    Hero h1 ;
    h1.setHealth(100);
    h1.setLevel('S');
    char name[8] = "Bhavook";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'K';
    h1.print();
    h2.print();

    // default copy constructor is a shallow copy => same memory but two name
    // we need to develop our own constructor to implement deep copy
    
    //Static object creation automatically calls destructor
    Hero *h3 = new Hero();
    //Dynamic object Creation needs destructor to be called
    delete h3;

    return 0;
}