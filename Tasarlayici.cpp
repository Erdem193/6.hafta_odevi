#include <iostream>
#include <cstdio>

using namespace std;
int main(){
  int o_not[6][2];
  float ort[6];
  for(int i=1;i<=6;i++){
   cout<<i<<". Ogrencinin Kimya ve Biyoloji Notunu Sirayla Giriniz!"<<endl;
   cin>> o_not[i][1];
   cin>> o_not[i][2];
   ort[i]=(o_not[i][1]+o_not[i][2])/2;
  }
for(int j=1;j<=6;j++)cout<<j<<". Ogrencinin Kimya Notu: "<<o_not[j][1]<<"\t Biyoloji Notu: "<<o_not[j][2]<<"\t Not Ortalamasi: "<<ort[j]<<endl;
}
