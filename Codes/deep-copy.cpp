#include <iostream>
using namespace std;

class Circle{
    public:
    float radius;
    float* ptr; // pointer to radius
    Circle() // Default Constructor
    {
        radius=1;
        ptr=&radius;
        //cout<<"Default Constructor Called"<<endl;
    }
    Circle(int r){ // Parameterized Constructor
        radius=r;
        ptr=&radius;
        //cout<<"Parameterized Constructor Called"<<endl;
    }
    void setRadius(float c)
    {
        this->radius=c;
    }
    void display(){
        cout<<"Circle with Radius: "<<radius<<" Pointer: "<<ptr<<endl;
    }
    Circle(const Circle& c) /* Deep copy constructor */
    {
        radius=c.radius;
        ptr=&radius;
    }

};

int main()
 {
     Circle c1;
     Circle c2(12);
     Circle c3(c2);
     c3.setRadius(9);

     c1.display();
     c2.display();
     c3.display();

    return 0;
 }


