// Use of static keyword in c++
#include <iostream>

using namespace std;
class a
{
    public:
    static int count1;
    int count2=0;
    
    a()
    {
        count1++;
        count2++;
    }
    static void static_fun()
    {
        cout<<"Inside static function"<<"\n";
        cout<<"Static count 1 is ::"<<count1<<"\n";//3
        cout<<"Non static count 2 cannot be accessed cause static fun can access static members\n";
    }
    void fun()
    {
        cout<<"Inside non static function"<<"\n";
        cout<<"Static count 1 is ::"<<count1<<"\n";//3
        cout<<"Non static count 2 is ::"<<count2<<"\n";//1    -- these all are the outputs
    }
};

int a::count1=0;// Initialise static variable outside the class

int main()
{
    a ob1;
    a ob2;
    a ob3;
    cout<<"Calling non static function::\n";
    ob3.fun();
    cout<<"Calling static function::\n";
    a::static_fun();
    cout<<"Another way ::"<<a::count1;//3
    return 0;
}
