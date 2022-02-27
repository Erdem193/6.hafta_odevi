#include <iostream>
using namespace std;

int main(){
int k=0;
int oyuncu[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
cout<<oyuncu[0][0]<<" "<<oyuncu[0][1]<<" "<<oyuncu[0][2]<<" "<<oyuncu[0][3]<<" ";
cout<<oyuncu[1][3]<<" "<<oyuncu[2][3]<<" "<<oyuncu[3][3]<<" ";
cout<<oyuncu[3][2]<<" "<<oyuncu[3][1]<<" "<<oyuncu[3][0]<<" ";
cout<<oyuncu[2][0]<<" "<<oyuncu[1][0]<<" ";
cout<<oyuncu[1][1]<<" "<<oyuncu[1][2]<<" ";
cout<<oyuncu[2][2]<<" "<<oyuncu[2][1]<<" ";
return 0;
}
//Başka türlü yapmayı bulamadım hocam.
