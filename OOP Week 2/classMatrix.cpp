#include <iostream>
#include<cstdlib>

using namespace std;

class matrix{
    int r,c;
    int **ptr;
    //fuchka khabo -_-
public:
    void setMatrix(){
        int upperlimit;

        cout<<"no of rows"<<endl;
        cin>>r;
        cout<<"no of column"<<endl;
        cin>>c;
        cin>>upperlimit;
        ptr=new int* [r];
        for(int i=0;i<r;++i)
        {
            ptr[i]=new int [c];

        }
        for(int i =0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                ptr[i][j]=rand()%upperlimit;
            }
        }

    }
    void showMatrix()
    {
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    matrix m1,m2,m3;
    cout<<"Populate M1"<<endl;
    m1.setMatrix();
    cout<<"Populate M1"<<endl;
    m2.setMatrix();
    cout<<"The matrix M1 & M2 are "<<endl;
    m1.showMatrix();
    m2.showMatrix();
    return 0;
}
