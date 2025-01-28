

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int n;
    float c;
    cout<<"Enter the operand 1 : ";
    cin>>a;
    cout<<"Enter the operand 2 : ";
    cin>>b;
    cout<<"Choose the operation : \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout<<"Enter the operations : ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Answer : "<<(a+b);
        break;
        case 2:
        cout<<"Answer : "<<(a-b);
        break;
        case 3:
        cout<<"Answer : "<<(a*b);
        break;
        case 4:
        c = (float)a/(float) b;
        cout<<"Answer : "<<c;
        break;
        default:
        cout<<"Invalid operator";
    }
    return 0;
}