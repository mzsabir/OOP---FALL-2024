#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream writter;
    writter.open("name.txt");
    writter<<"Hello"<<" "<<"Ali"<<endl;
    writter.close();
    return 0;
}