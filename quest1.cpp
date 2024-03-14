#include<iostream>
using namespace std;
class  Complex
{
private:
    int real, img;

public:
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void showData()
    {
        cout<<real <<" + "<<img <<" - "<<endl;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real = real + C.real;
        temp.img = real + C.img;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.real = real - C.real;
        temp.img = real - C.img;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.real = real * C.real;
        temp.img = real * C.img;
        return temp;
    }
    bool operator == (Complex C)
    {
        if(real == C.real && img == C.img)
        return true;
        return false;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(5,5);
    c2.setData(5,6);

    c1.showData();
    c2.showData();

    c3 = c1+c2; // overloaded +
    c3.showData();

    c4 = c1-c2; // overloaded -
    c4.showData();

    c5 = c1*c2; // overloaded *
    c5.showData();  

    bool result = c1==c2; //  overloaded ==
    result ? cout<<"Eqal ": 
    cout<<"Not Eqal: ";
    return 0;
}

 
