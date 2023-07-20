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


int main() {
	penerbit* varpenerbit1 = new penerbit("gama press");
	penerbit* varpenerbit2 = new penerbit("intan pariwara");

	pengarang* varpengarang1 = new pengarang("joko");
	pengarang* varpengarang2 = new pengarang("lia");
	pengarang* varpengarang3 = new pengarang("giga");
	pengarang* varpengarang4 = new pengarang("asroni");

	buku* varbuku1 = new buku("fisika");
	buku* varbuku2 = new buku("Algoritma");
	buku* varbuku3 = new buku("Basisdata");
	buku* varbuku4 = new buku("Dasar Pemrograman");
	buku* varbuku5 = new buku("Matematika");
	buku* varbuku6 = new buku("Multimedia 1");

	varpenerbit1->tambahpengarang(varpengarang1);
	varpenerbit1->tambahpengarang(varpengarang2);
	varpenerbit1->tambahpengarang(varpengarang3);

	varpenerbit2->tambahpengarang(varpengarang4);
	varpenerbit2->tambahpengarang(varpengarang3);

	varpengarang3->tambahpengarang(varpengarang1);
	varpengarang3->tambahpengarang(varpengarang2);

	varpengarang1->tambahbuku(varbuku1);
	varpengarang1->tambahbuku(varbuku2);
	varpengarang2->tambahbuku(varbuku3);
	varpengarang4->tambahbuku(varbuku4);
	varpengarang3->tambahbuku(varbuku5);
	varpengarang3->tambahbuku(varbuku6);

	varpengarang1->cetakpengarang();
	varpengarang2->cetakpengarang();
	varpengarang3->cetakpengarang();

	return 0;
}