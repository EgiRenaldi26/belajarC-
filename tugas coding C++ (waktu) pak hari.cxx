#include <iostream>
using namespace std;

int main()
{
  int pukul;
  cout<<"MASUKAN PUKUL BERAPA SEKARANG: ";
cin>>pukul;

  if(pukul<=11){cout<<" Selamat pagi";}
  else if(pukul<=15){cout<<"Selamat siang";}
  else if(pukul<=18){cout<<"Selamat sore";}
  else if(pukul<=24){cout<<"Selamat malam";}
  return 0;
}