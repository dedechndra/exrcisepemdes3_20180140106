#include<iostream>
#include<vector>
using namespace std;

class buku {
public:
	string namaBuku;
	buku(string pNamaBuku) :namaBuku(pNamaBuku) {}
};


class pengarang {
public:
	string namapengarang;
	vector <pengarang*> daftarpengarang;
	vector <buku*> daftarbuku;
	pengarang(string pNama) : namapengarang(pNama) {}

	void tambahpengarang(pengarang*);
	void cetakpengarang();

	void tambahbuku(buku*);
	void cetakbuku();
};

class penerbit {
public:
	string namapenerbit;
	vector<penerbit*> daftarpenerbit;
	penerbit(string pNama) : namapenerbit(pNama) {}

	void tambahpenerbit(penerbit*);
	void cetakpenerbit();

	void tambahbuku(buku*);
	void cetakbuku();
};

class penerbit {
public:
	string namapenerbit;
	vector<pengarang*> daftarpengarang;
	penerbit(string pNama) : namapenerbit(pNama) {}

	void tambahpengarang(pengarang*);
	void cetakpengarang();
};


void pengarang::tambahpengarang(pengarang* pengarang)
{
	daftarpengarang.push_back(pengarang);
}

void penerbit::cetakpenerbit() {
	cout << "daftar penerbit yang diikuti \"" << this->namapenerbit << "\":\n";
	for (auto& a : daftarpenerbit) {
		cout << a->namapenerbit << "\n";
	}
	cout << endl;
}

void pengarang::tambahbuku(buku* pbuku)
{
	daftarbuku.push_back(pbuku);
}

void pengarang::cetakbuku() {
	cout << "daftar buku yang dikarang \"" << this->namapengarang << "\":\n";
	for (auto& a : daftarbuku) {
		cout << a->namaBuku << "\n";
	}
	cout << endl;
}
void penerbit::tambahpengarang(pengarang* pengarang)
{
	daftarpengarang.push_back(pengarang);
}

void penerbit::cetakpengarang() {
	cout << "daftar penerbit yang diikuti \"" << this->namapenerbit << "\":\n";
	for (auto& a : daftarpengarang) {
		cout << a->namapengarang << "\n";
	}
	cout << endl;
}
