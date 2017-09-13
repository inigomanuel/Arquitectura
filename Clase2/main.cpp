#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string multiplicacion_de_binarios(string numero1,string numero2,int tamano){

}

string sumadebinarios(string numero1,string numero2,int tam){
    int contador;
    int acarreador=0;
    string acarreadorstr(1,'0');
    string respuesta(tam,'0');
    for (int i=tam-1;i>=0;i--){
        contador=0;
        if(numero1[i]=='0' && numero2[i]=='0' && acarreadorstr[0]=='0'){
            respuesta[i]='0';
        }
        if(numero1[i]=='1' && numero2[i]=='0' && acarreadorstr[0]=='0'){
            respuesta[i]='1';
        }
        if(numero1[i]=='0' && numero2[i]=='1' && acarreadorstr[0]=='0'){
            respuesta[i]='1';
        }
        if(numero1[i]=='1' && numero2[i]=='1' && acarreadorstr[0]=='0'){
            respuesta[i]='0';
            contador++;
        }
        if(numero1[i]=='0' && numero2[i]=='0' && acarreadorstr[0]=='1'){
            respuesta[i]='1';
        }
        if(numero1[i]=='1' && numero2[i]=='0' && acarreadorstr[0]=='1'){
            respuesta[i]='0';
            contador++;
        }
        if(numero1[i]=='0' && numero2[i]=='1' && acarreadorstr[0]=='1'){
            respuesta[i]='0';
            contador++;
        }
        if(numero1[i]=='1' && numero2[i]=='1' && acarreadorstr[0]=='1'){
            respuesta[i]='1';
            contador++;
        }
        if (contador>0){
            acarreadorstr[0]='1';
        }else{
            acarreadorstr[0]='0';
        }
    }
    return respuesta;
}
int main ()
{
    /*
    string binario,numero1,numero2;
    string tubinario;
    int tamano;
    cout<<"Ingresa el tamaño de bits: "<<endl;
    cin>>tamano;
    for(int i=0;i<tamano;i++){
        binario.insert(i,"0");
    }
    cout<<"Ingrese un numero"<<endl;
    cin>>numero1;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero2;
    string producto=multiplicacion_de_binarios(numero1,numero2,tamano);
    cout<<"La suma de los binarios es : "<<endl;
    cout<<producto<<endl;
    */
    string binario;
    int tamano;
    cout<<"Ingresa el tamaño de bits: "<<endl;
    cin>>tamano;
    for(int i=0;i<tamano;i++){
        binario.insert(i,"0");
    }
    string numero1;
    string numero2;
    cout<<"Escriba el 1er numero para la suma: "<<endl;
    cin>>numero1;
    cout<<"Escriba el 2do numero para la suma: "<<endl;
    cin>>numero2;
    string rpta=sumadebinarios(numero1,numero2,tamano);
    cout<<"La suma de los binarios es : "<<endl;
    cout<<rpta<<endl;
    return 0;
}
