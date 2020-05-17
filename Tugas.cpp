#include<iostream>
#include<stdlib.h>
using namespace std;
int s(int x, int y,int z);
int main(){
	int jawaban[10];
	int nilai=0,y=0;
	for (int i=1; i<=10; i++){
		jawaban[i-1]= s(i,y,jawaban[i-1]);
		system ("CLS");
	}
	for (int i=0; i<10; i++){
		nilai = nilai + (jawaban[i] * 10);
	}
	y=1;
	system ("CLS");
	cout << "+-------------------------------+"<<endl;
	cout << "|\tnilai anda :" <<nilai<<"\t\t|"<< endl;
	cout << "+-------------------------------+"<<endl;
	for (int i=1; i<=10; i++){
		s(i,y,jawaban[i-1]);
		cout << "------------------------------+"<<endl;
	}
}

int s(int x, int y,int z){
	int p;
	if(x == 1){
		cout << "soal no 1 : "<<endl;
		cout << "Kasus Corona pertama kali muncul di :"<<endl;
		cout << "1. USA"<<endl;
		cout << "2. INDONESIA"<<endl;
		cout << "3. CHINA NAMBA WAN"<<endl;
		cout << "4. ANTARTIKA"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==3){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 2){
		cout << "soal no 2 : "<<endl;
		cout << "diduga corona berasal dari hewan :"<<endl;
		cout << "1. Semut"<<endl;
		cout << "2. Belalang"<<endl;
		cout << "3. Canis lupus familiaris"<<endl;
		cout << "4. Kelelawar"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==4){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 3){
		cout << "soal no 3 : "<<endl;
		cout << "COVID-19 bisa masuk melalui anggota-anggota tubuh di bawah ini, kecuali... :"<<endl;
		cout << "1. Mata"<<endl;
		cout << "2. Hidung"<<endl;
		cout << "3. Mulut"<<endl;
		cout << "4. telinga"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==4){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 4){
		cout << "soal no 4 : "<<endl;
		cout << "Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk COVID-19 yaitu... derajat"<<endl;
		cout << "1. 35"<<endl;
		cout << "2. 36"<<endl;
		cout << "3. 37"<<endl;
		cout << "4. 33"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==3){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 5){
		cout << "soal no 5 : "<<endl;
		cout << "Masa inkubasi COVID-19 selama..."<<endl;
		cout << "1. 1 hari"<<endl;
		cout << "2. 14 hari"<<endl;
		cout << "3. 21 hari"<<endl;
		cout << "4. 33 hari"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==2){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 6){
		cout << "soal no 6 : "<<endl;
		cout << "Cara bersin yang baik dan beretika yaitu..."<<endl;
		cout << "1. Menutup dengan baju bagian luar"<<endl;
		cout << "2. Menutup dengan baju bagian dalam"<<endl;
		cout << "3. Menutup dengan telapak tangan"<<endl;
		cout << "4. Menutup dengan tisu"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==2){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 7){
		cout << "soal no 7 : "<<endl;
		cout << "Jenis vitamin yang disarankan dikonsumsi untuk meningkatkan daya tahan tubuh agar terhindar dari COVID-19 adalah..."<<endl;
		cout << "1. Vitamin A dan B "<<endl;
		cout << "2. Vitamin B dan C  "<<endl;
		cout << "3. Vitamin C dan D"<<endl;
		cout << "4. Vitamin C dan E"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==3){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 8){
		cout << "soal no 8 : "<<endl;
		cout << "Masker yang dianjurkan bagi yang BUKAN tenaga medis yaitu... derajat"<<endl;
		cout << "1. Masker Kain"<<endl;
		cout << "2. Masker N95"<<endl;
		cout << "3. Masker Kecantikan"<<endl;
		cout << "4. Masker Bedah"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==1){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 9){
		cout << "soal no 9 : "<<endl;
		cout << "Jaga Jarak sebaiknya ... "<<endl;
		cout << "1. 1-2 m"<<endl;
		cout << "2. 3-5 cm"<<endl;
		cout << "3. 3-7 mm"<<endl;
		cout << "4. 0-0.9 m"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==1){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}else if(x == 10){
		cout << "soal no 10 : "<<endl;
		cout << "kasus pertama Corona terjadi pada bulan :"<<endl;
		cout << "1. December"<<endl;
		cout << "2. November"<<endl;
		cout << "3. Maret"<<endl;
		cout << "4. Januari"<<endl;
		if (y==0){
			cout << "jawaban mu :";
			cin >> p;
			if (p==1){
				x=1;
			}else{
				x=0;
			}
			return x;
		}else{
			if (z==1){
				cout << "jawaban anda benar"<<endl;
			}else{
				cout << "jawaban anda salah"<<endl;
			}
		}
	}
}
