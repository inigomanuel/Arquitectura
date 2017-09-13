#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binarioadeci(string a,int tam){
    int cont=0;
    int numerofinal=0;
    if(a[0]=='0'){
        int i=tam-1;
        for(i;i>=0;i--){
            if(a[i]=='1'){
                numerofinal=numerofinal+pow(2,cont);
                cont++;
            }else{
                cont++;
            }
        }
    }
    else{
        cont=0;
        int resto=0;
        int num=a.size();
        int nummax=pow(2,num-1);
        int i=tam-1;
        for(i;i>0;i--){
            if(a[i]=='1'){
                resto=resto+pow(2,cont);
                cont++;
            }else{
                cont++;
            }
        }
        numerofinal=resto-nummax;
    }
    return numerofinal;
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

string cambio_de_signo(string palabra,int tam){
    string temporal(tam,'0');
    temporal[tam-1]='1';
    for(int i=0;i<tam;i++){
        if (palabra[i]=='0'){
            palabra[i]='1';
        }else{
            palabra[i]='0';
        }
    }
    //cout<<"binarios invertidos: "<<palabra<<endl;
    string invert=sumadebinarios(palabra,temporal,tam);
    //cout<<"temporal: "<<temporal<<endl;
    return invert;
}

int main ()
{
    string binario;
    string tubinario;
    int tamano;
    cout<<"Ingresa el tamaño de bits: "<<endl;
    cin>>tamano;
    for(int i=0;i<tamano;i++){
        binario.insert(i,"0");
    }
    cout<<"Ingrese un numero"<<endl;
    cin>>tubinario;
    int numeroenbinario1=binarioadeci(tubinario,tamano);
    cout<<"El numero en binario es: "<<numeroenbinario1<<endl;

    /*string numero1;
    string numero2;
    cout<<"Escriba el 1er numero para la suma: "<<endl;
    cin>>numero1;
    cout<<"Escriba el 2do numero para la suma: "<<endl;
    cin>>numero2;
    string rpta=sumadebinarios(numero1,numero2,tamano);
    cout<<"La suma de los binarios es : "<<endl;
    cout<<rpta<<endl;*/

    string cambiosig=cambio_de_signo(tubinario,tamano);
    cout<<"cambiando de signo es en binario : "<<cambiosig<<endl;
    int numeroenbinario2=binarioadeci(cambiosig,tamano);
    cout<<"cambio de signo : "<<numeroenbinario2<<endl;

  return 0;
}
