#include <iostream>
using namespace std;

static void hitunganEK(double massa,double kecepatan) {
		double Ek = massa + (kecepatan +  kecepatan) ;
		cout << "Energi Kinetiknya Adalah : " << Ek << " joul " << endl;
	}
	
int main () {
	
	double massa = 0, kecepatan = 0, Ek = 0;
	cout <<"Menghitung Energi Kinetik: \n" ;
	cout <<"Masukan massa: " ;
	cout >> massa;
	cout << "Masukan Kecepatan: " ;
	cin >> Kecepatan;

HitungEk(Massa, Kecepatan) ;

return 0 ;
	}
