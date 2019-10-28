#include<bits/stdc++.h>

using namespace std;

double fun(double x)
{
    return x*x*x - x - 1;
}

void bisection(double a ,  double b)
{
    double c;

    while( (b-a) >= 0.01)
    {
        c =  (a+b)/2;

        if(fun(c) == 0.00)
        {
            break;
        }
        else if(fun(c)*fun(a) < 0.00){
            b=c;
        }
        else
            a=c;
    }

    cout<<"Value of c: "<<c<<endl;
}

int funcAB(int a[], int b[] , int len)
{
    int i=0;
    while( i<len && fun(a[i]) * fun(b[i]) >= 0)
    {
        i++;
    }
    return i;
}

int main(){

    int a[100]  , b[100];
    int k;

    for(int i=0;i<100;i++){
        a[i]=-i;
        b[i]=i;
    }
    k = funcAB(a,b,100);
    bisection (a[k], b[k]);
    return 0;
}
