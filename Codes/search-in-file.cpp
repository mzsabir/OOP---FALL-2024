#include <iostream>
#include <fstream>
#include "mubashir.h"
using namespace std;

int main()
{
    string s;
    cout<<"Please Enter Name to Search in File: ";
    cin>>s;
    ifstream f;
    f.open("data.txt");
    string line;
    int found=0;
    while(!f.eof())
    {
        getline(f,line,'#');
        if(s==line)
        {
             cout<<"Name Found: "<<line<<endl;
             found=1;
        }

    }
    if(found==0)
    {
        cout<<"Name not found.";
    }
    return 0;
}
