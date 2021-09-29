#include <iostream>
using namespace std;

class calculator
{
    private:
        float x;
        float y;
    public:
        void getinputs()
        {
            cout<<"Enter x? ";
            cin>>x; 
            cout<<"Enter y? ";
            cin>>y;
        }

        float add()
        {
            return x+y;
        }

};

int main()
{
    float result;
    calculator calc;
    calc.getinputs();
    result=calc.add();
    cout<<"The result of adding is "<<result;

    return 0;
}