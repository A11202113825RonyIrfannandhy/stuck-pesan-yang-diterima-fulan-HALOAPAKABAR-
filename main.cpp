/*
    Nama   : Rony Irfannandhy
    NIM    : A11.2021.13825
    Kelas  : A11.4313

    create : Si Fulan mendapat pesan dari temannya, namun pesan tersebut rusak seperti yang tertera sebagai berikut
             H**AL***O**AP***AK*A**B*****A*R****

             Dengan menggunakan konsep stack, bantulah Fulan menghilangkan tanda * sehingga akan muncul tulisan HALOAPAKABAR.
             Ketentuan:
             Jika ketemu *, maka lakukan pop, jika ketemu alfabet, lakukan push.

             Hint:
             1. Pesan yang diterima Fulan bisa dianggap sebagai stack yang sudah penuh
             2. Buatlah satu stack tambahan untuk menampung alfabet
             3. Tampilkan stack yang menampung alfabet
*/


#include <iostream>
#include <stdlib.h>
#define MAX_STACK 40
using namespace std;

void push();
void pop();
void print();
void proses();
bool isfull();
bool isempty();
char ditumpuk[MAX_STACK]{'H','*','*','A','L','*','*','*','O','*','*','A','P','*','*','*','A','K','*','A','*','*','B','*','*','*','*','*','A','*','R','*','*','*','*'};
char anyar[MAX_STACK]{};
int top=-1;
char isi;

int main(){
    cout<<"Sebelum Diproses sistem : ";
    for(int i=0;i<MAX_STACK;i++){
        cout<<ditumpuk[i];
    }
    cout<<"\n\nSetelah Diproses sistem : ";
    proses();
    for(int i=0;i<MAX_STACK;i++){
        cout<<anyar[i];
    }
    cout<<"\n";
}

void proses(){
    for(int i=0;i<MAX_STACK;i++){
        if(ditumpuk[i]=='*'){
        }
        else{
            isi=ditumpuk[i];
            push();
        }
    }
}

void push(){
    if(!isfull()){
        top++;
        anyar[top]=isi;
    }
    else
        cout<<"\nSTACK PENUH!!\n";
}

void pop(){
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<ditumpuk[i]<<", ";
    }
    cout<<"\n";
}

bool isfull(){
    if(top==MAX_STACK-1)
        return true; //1
    else
        return false;  //0
}

bool isempty(){
    if(top==-1)
        return true;   //1
    else
        return false;  //0
}
