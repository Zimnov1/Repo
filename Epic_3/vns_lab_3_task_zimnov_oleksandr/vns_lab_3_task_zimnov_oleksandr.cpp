#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n=10;
    double k=(0.8-0.1)/n, sum_a=0, x_a=0;
    for(int i=1; i<=n; i++){
        x_a+=k;
        sum_a+=pow(-1,i+1)*((pow(x_a,2*i))/(2*i*(2*i-1)));
    }
    cout<<"a) Sum of number for n=10: "<<sum_a<<endl;
    cout<<"b) Sum of number epsilon=0.0001: "<<round(sum_a*10000)/10000;
}
