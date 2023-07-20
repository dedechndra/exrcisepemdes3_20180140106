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
