//ID NUMBER: 10681368

#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks " <<endl;
    cin>>marks;

    if(marks>=80){
            cout<<"you had an A"<<endl;
    }
    else if(80>marks>=75){
        cout<<"you had a B+"<<endl;
    }
    else if(75>marks>=70){
        cout<<"you had a B-"<<endl;
    }
    else if(70>marks>=65){
        cout<<"you had a C+"<<endl;
    }
    else if(65>marks>=60){
        cout<<"you had a C"<<endl;
    }
    else if(60>marks>=55){
        cout<<"you had a D+"<<endl;
    }
    else if(55>marks>=50){
        cout<<"you had a D"<<endl;
    }
    else if(50>marks>=45){
        cout<<"you had an E"<<endl;
    }
    else if(45>marks>=40){
        cout<<"you had an F"<<endl;
    }
    return 0;
}
