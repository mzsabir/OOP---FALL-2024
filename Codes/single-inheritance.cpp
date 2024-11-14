#include <iostream>

using namespace std;
class Person{
    private:
    int id;
    public:
      void set_id(int x) { id=x;}
      int get_id(){return id;}
    public:
      Person(){
          cout<<"Person Default Constructor"<<endl;
      }
      Person(int x){
          id=x;
      }
};

class Student: public Person{
    private:
        float gpa;
    public:
    Student(){
        cout<<"Student Default Constructor"<<endl;
    }
    Student(int x,float g):Person(x)
    {
        gpa=g;
    }
};
int main()
{
    Student ali(5,3.4);
    Student ayesha;
    return 0;
}
