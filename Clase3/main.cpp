#include <iostream>
#include <bitset>
using namespace std;

void multiplicar_con_signo(int a, int b){
    bitset<16>(x);
    x = a*b;
    cout<<"R: "<<x<<endl;
}

void multiplicar(int c,int d)
{
    bitset<8>(x);
    x = c*d;
    cout<<"R: "<<x<<endl;
}

void division(int e,int f){

    int z=0;
    if(e>f){
        bitset<8>(x);
        bitset<8>(y);
        x= e%f;
        y= e/f;
        cout<<"Residuo: "<<x<<endl;
        cout<<"R: "<<y<<endl;
    }else{
        bitset<8>(z);
        cout<<"R: "<<z<<endl;
    }
}

int main() {
    unsigned long c;
    unsigned long d;
    cout<<"Ingrese primer numero: "<<endl;
    cin>>c;
    cout<<"Ingrese segundo numero:"<<endl;
    cin>>d;
    cout<<"\n";
    cout<<bitset<8>(c)<<endl;
    cout<<bitset<8>(d)<<endl;
    cout<<"\n";
    multiplicar(c,d);
    cout<<"\n";
    signed long a;
    signed long b;
    cout<<"Ingrese primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese segundo numero:"<<endl;
    cin>>b;
    cout<<"\n";
    cout<<bitset<8>(a)<<endl;
    cout<<bitset<8>(b)<<endl;
    cout<<"\n";
    multiplicar_con_signo(a,b);
    unsigned long e;
    unsigned long f;
    cout<<"Ingrese primer numero: "<<endl;
    cin>>e;
    cout<<"Ingrese segundo numero:"<<endl;
    cin>>f;
    cout<<"\n";
    cout<<bitset<8>(e)<<endl;
    cout<<bitset<8>(f)<<endl;
    cout<<"\n";
    division(e,f);
}
