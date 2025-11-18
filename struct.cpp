/* #include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float nilai;
};

int main() {
    Mahasiswa mhs;

    mhs.nama = "Rafa Ichitawa";
    mhs.umur = 20;
    mhs.nilai = 88.5;

    cout << "Masukkan nama mahasiswa : ";
    cin >> mhs.nama

    cout << "Masukkan umur mahasiswa : ";
    cin >> mhs.umur;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> mhs.nilai;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama  : " << mhs.nama << endl;
    cout << "Umur  : " << mhs.umur << " tahun" << endl;
    cout << "Nilai : " << mhs.nilai << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
    string warna;
};

int main() {
    Mobil mobil1, mobil2;

    mobil1.merk = "Toyota Supra";
    mobil1.tahun = 2020;
    mobil1.warna = "Merah";

    mobil2.merk = "Honda Civic";
    mobil2.tahun = 2018;
    mobil2.warna = "Hitam";

    cout << "=== Data Mobil 1 ===" << endl;
    cout << "Merk  : " << mobil1.merk << endl;
    cout << "Tahun : " << mobil1.tahun << endl;
    cout << "Warna : " << mobil1.warna << endl;

    cout << endl;

    cout << "=== Data Mobil 2 ===" << endl;
    cout << "Merk  : " << mobil2.merk << endl;
    cout << "Tahun : " << mobil2.tahun << endl;
    cout << "Warna : " << mobil2.warna << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    float harga;
};

void tampilkanBuku(Buku) {
    cout << "Data Buku" << endl;
    cout << "Judul     : " << b.judul << endl;
    cout << "Pengarang : " << b.pengarang << endl;
    cout << "Harga     : Rp " << b.harga << endl;
}

int main() {
    Buku buku1;

    buku1.judul = "Belajar C++ Dasar";
    buku1.pengarang = "Rafa Ichitawa";
    buku1.harga = 85000;

    tampilkanBuku(buku1);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    string kelas;
    int nis;
};

int main() {
    Siswa daftarSiswa[3];

    daftarSiswa[0] = {"Andi", "XII RPL", 12345};
    daftarSiswa[1] = {"Budi", "XI RPL", 23456};
    daftarSiswa[2] = {"Hiro", "X RPL", 34567};

    cout << "=== Daftar Siswa ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama  : " << daftarSiswa[i].nama << endl;
        cout << "Kelas : " << daftarSiswa[i].kelas << endl;
        cout << "NIS   : " << daftarSiswa[i].nis << endl;
    }

    return 0;
}
*/