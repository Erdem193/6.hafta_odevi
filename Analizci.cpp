#include <iostream>
#include <ctime>
using namespace std;
int main() {
  int durum;
  srand(time(0));
   for(int i=0;i<3;i++)
 {
  int sayi=rand()%9;
  cout<<"Sayin "<<sayi<<" ise 1 degil ise 0 yaz"<<endl;
  cin>>durum;
    if(durum==1)
  {
   cout<<i+1<<". Denemede Buldum!";
   break;
  }
 }
   if (durum==0)cout<<"Malesef Bulamadim!";
  return 0;
}
//Bilgisayar tekrar aynı tahminlerde bulunabiliyor
