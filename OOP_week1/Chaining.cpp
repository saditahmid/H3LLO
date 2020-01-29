#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class ComplexNo{
    int real, img;
public:
    ComplexNo populate()
    {
        cout<<"Enter Real Value :";
        cin>>real;
        cout<<"Enter Imaginary value: ";
        cin>>img;
        return *this;
    }
    ComplexNo increment()
    {
        real++;img++;
        return *this;
    }
    void showComplexNo()
    {
        cout<<real<<(img<0?"":"+")<<img<<"i"<<endl;
    }
};

int main()
{
    ComplexNo c1,c2;
    c1.populate().increment().showComplexNo();
}
