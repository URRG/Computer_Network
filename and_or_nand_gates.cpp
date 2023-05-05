#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"Enter the choice in number\n1.And\n2.OR\n3.XOR";
cin>>a;
cout<<"enter first number";
cin>>b;
cout<<"enter second number";
cin>>c;
    switch(a)
    {
        case 1:
            int ans1;
            ans1 = (b & c);
            cout<<"answere is"<<ans1;
            break;

        case 2:
            int ans2;
            ans2 = b | c;
            cout<<"answere is"<<ans2;
            break;
        case 3:
            int ans3;
            ans3 = b^c;
            cout<<"answere is"<<ans3;
            break;
        default:
            cout<<"enter valid number";
    }
return 0;
}
