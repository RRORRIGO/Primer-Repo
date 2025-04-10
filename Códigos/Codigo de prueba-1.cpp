#include <iostream>
using namespace std;
void wallis(float n, char p){
    int numerador,denominador;
    float producto=1.0;
    if(n>0.5){
    }else{
        if(p='a'){
            for(int i=1;producto>n;i++){
                producto*=(i*2.0-1)/(2.0*i);
                numerador=(i*2-1);
                denominador=(2*i);
 
            
            cout<<numerador<<"/"<<denominador;
            if(producto>n){
                cout<<"*";
            }
            }
            cout<<"="<<producto;
        }
    }
}
int main(){
    
    float limite;
    char letra;
    cin>>limite>>letra;
    wallis(limite,letra);
    return 0;
}