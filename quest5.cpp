#include<iostream>
using namespace std;

class Number 
{
private:
    int x, y, z;

public:
    void getData() 
    {
        cout << "\nEnter Three numbers: \n";
        cin >> x >> y >> z;
    }

    void disp() 
    {
        cout << "\n\n" << x << "\t" << y << "\t" << z;
    }

    // Overloading unary minus operator
    void operator-() 
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() 
{
    Number n;

    n.getData();
    cout << "\n\nNumber is ";
    n.disp();
    -n; // Unary minus operator being called here
    cout << "\n\nNegated number: ";
    n.disp();
    return 0;
}
