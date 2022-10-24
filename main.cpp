#include <iostream>
#include <string>
#include <stack>
#define MAX 36
using namespace std;

int main(){
stack<char>haloDek;
stack<char>ahh;
char isi;
char arr[MAX];
string balik;
//
cout<<"A11.2021.13656"<<endl;
cout<<"ILHAM SAFITRO"<<endl;
cout<<"TUGAS SI FULAN"<<endl;
cout<<endl;
cout<<"masukkan:";
for(int i=0;i<MAX;i++){
    cin>>isi;
    arr[i];

    if(isi!='*'){
        ahh.push(isi);
        balik.push_back(ahh.top());
    }
    if(isi=='*'){
        haloDek.push(isi);
        haloDek.pop();
    }
}
//
while(!ahh.empty()){
    cout<<"hasil stack = "<<endl;
    cout<<balik<<endl;
    break;
    ahh.pop();
}
return 0;
}
//H**AL***O**AP***AK*A**B*****A*R*****
