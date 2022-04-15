#include <iostream>
#include <cmath>

using namespace std;

int d, a, b, maxArea;
string run;

int main()

{
    cout<<"If you want to run an algorithm, write RUN in terminal"<<endl;
    cin>>run;
    if ((run=="RUN")||(run=="run")||(run=="Run")||(run=="rUN")||(run=="RUn")||(run=="RuN")){
    cout <<"How many meters of fence is available?:"<<endl;
    cin>>d;
    //count the derivative to find "a "for the maximum area
    // b = d-2a;
    // (a*(d-2a));
    // a*d-2a^2=>
    //d-4a=0

    a=(d/4);
    b=(d-(2*a));
    maxArea =(a*b);
    cout<<"Available fence meters: "<<d<<endl;
    cout<<"Optimal length of a segment: "<<a<<endl;
    cout<<"Optimal length of b segment: "<<b<<endl;
    cout<<"The optimal area of farm in square meters: "<<maxArea<<endl;

    return 0;
    }
}
