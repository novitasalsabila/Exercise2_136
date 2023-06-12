#include<iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan nilai dari lingkaran maupun bujur sangkar 
public:
	bidangDatar() { //condtruktor
		x = 0;
	}
	virtual void input() {} //fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di X
	virtual float Luas(int a) //fungsi untuk mrnghitung luas
	{
		return 0;
	}
	virtual float Keliling(int a) { //funsi untuk menghitug keliling
		return 0;
	}
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}

};
class Lingkaran :public bidangDatar { //inheritence
public:
	int jejari;
	void input()
	{
		cout << "Masukan jari-jari Lingkaran :";
		cin >> jejari;
		setX(jejari); 
	}
	float Luas(int a) {
		return 3.14 * a * a; 
	}
	float Keliling(int a) {
		return  2 * 3.14 * a; 
	}
};
class BujurSangkar :public bidangDatar {
public:
	int sisi;
	void input() {
		cout << "Masukan sisi BujurSangkar :";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int b) { 
		return b * b;
	}
	float Keliling(int b) { 
		return 4 * b;
	}
};

int main() {
	Lingkaran lingkaran; 
	BujurSangkar bujursangkar; 

	bidangDatar* l = &lingkaran; 
	bidangDatar* b = &bujursangkar; 
	l->input();  
	int x = l->getX();
	cout << "Luas Lingkaran : " << l->Luas(x) << endl;
	cout << "Keliling lingkaran :" << l->Keliling(x) << endl;

	b->input();
	x = b->getX();
	cout << "Luas BujurSangkar : " << b->Luas(x) << endl;
	cout << "Keliling BujurSangkar :" << b->Keliling(x) << endl;
	return 0;

}