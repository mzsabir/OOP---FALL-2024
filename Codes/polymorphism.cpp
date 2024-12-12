#include <iostream>

using namespace std;
class Animal
{
   public:
    virtual void speak(){
        cout<<"Animal Speck"<<endl;
    };
    virtual ~Animal(){
    }
};

class Dog:public Animal{
    public:
      void speak(){
        cout<<"Dog Barks"<<endl;
    }
};

class Cow:public Animal{
    public:
      void speak(){
        cout<<"Cow Moo"<<endl;
    }
};

int main()
{
    Animal* ptr=new Cow();
    ptr->speak();
    ptr=new Dog();
    ptr->speak();
    delete ptr;
    return 0;
}
