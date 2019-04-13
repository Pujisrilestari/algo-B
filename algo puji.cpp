#include<iostream>
using namespace::std;
double masukan(string text){
double n;

cout<<"masukan nilai"<<text<<":";
cin>>n;
return n;}

void grade(double n){
if (n>81)
{cout<<"(A)";}
else if (n>61)
{cout<<"(B)";}
else if (n>41)
{cout<<"(C)";}
else if (n>21)
{cout<<"(D)";}
else
{cout<<"(E)";}
}
struct amazing{
double uts,uas,tugas,absen;};
main(){
float n;
amazing ok;

ok.uts=masukan("UTS");
ok.uas=masukan("UAS");
ok.tugas=masukan("TUGAS");
ok.absen=masukan("ABSEN");

n=(ok.uts*20/100)+(ok.uas*30/100)+(ok.tugas*35/100)+(ok.absen*15/100);
cout<<"nilai akhir:";
cin>>n;
grade(n);
}






