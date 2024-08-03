#include<iostream>
using namespace std;
int main()
{
    float num1,num2,result;
    char op;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    cout<<"Enter operation (+,-,*,/) :";
    cin>>op;
    switch(op)
    {
        case '+':
             result = num1 + num2;
             cout<<  num1 << " + " << num2 << " = " << result << endl;
             break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default :
            cout<<"Invalid operation";
            cout<<"The result is "<<result;
            break;
    }
    return 0;            

    }
