#include <iostream>

using namespace std;

  int main(){
    int nilai;
      cout<<"masukan jumlah nilai :";
      cin>>nilai;
      if(nilai>=85){
        cout<<"nilai = a"<<endl;
      }else if (nilai >=75){
        cout<<"nilai =b+"<<endl;
      }else if(nilai>=65){
        cout <<"nilai =c+"<<endl;
      }else if(nilai >=45){
        cout <<"nilai =c"<<endl;
      }else if (nilai >=30){
        cout <<"nilai =d+"<<endl;
      }else if(nilai >=20){
        cout <<"nilai =d"<<endl;
      } else if (nilai >=0){
        cout <<"nilai =e"<<endl;
      }
      
      
  }