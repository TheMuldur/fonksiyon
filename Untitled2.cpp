#include <iostream>
using namespace std;

int alanHesapla(int a,int b){
	
	return a*b;
}
int cevreHesapla(int a, int b){
	return 2*(a+b);
}
int main(){
	int kkenar,UKenar;
	cout<<"uzun kenari giriniz: ";
	cin>>kkenar;
	cout<<"kisa kenari giriniz: ";
	cin>>UKenar;
	cout<<"dikdortgenin alani: "<<alanHesapla(kkenar,UKenar)<<endl;
	cout<<"dikdortgenin cevresi: "<<cevreHesapla(kkenar,UKenar);
}





