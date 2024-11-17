#include <iostream>
#include "MLL.h"

using namespace std;

int main()
{
ListMahasiswa L;
    createList(L);

    //no 1
    cout << "Instruksi 1" << endl;
    addMahasiswa(L, "Andi", "12345");
    addMahasiswa(L, "Reza", "67890");
    cout << endl;

    //no 2
    cout << "Instruksi 2" << endl;
    addMataKuliah(L, "12345", "Algoritma");
    addMataKuliah(L, "12345", "Struktur Data");
    addMataKuliah(L, "67890", "Bahasa Indonesia");
    cout << endl;

    //no 3
    cout << "Instruksi 3" << endl;
    cout << "Daftar Mahasiswa dan Mata Kuliah:" << endl;
    printList(L);
    cout << endl;

    //no 4
    cout << "Instruksi 4" << endl;
    cout << "Menghapus mata kuliah 'Algoritma' dari mahasiswa dengan NIM '12345'" << endl;
    deleteMataKuliah(L, "12345", "Algoritma");
    cout << endl;

    //no 5
    cout << "Instruksi 5" << endl;
    deleteMataKuliah(L, "12345", "Kalkulus");
    cout << endl;

    //no 6
    cout << "Instruksi 6" << endl;
    cout << "Daftar Mahasiswa dan Mata Kuliah setelah penghapusan:" << endl;
    printList(L);
    cout << endl;

    //no 7
    cout << "Instruksi 7" << endl;
    cout << "Mencari mahasiswa yang mengambil 'Struktur Data':" << endl;
    findMahasiswaByMataKuliah(L, "Struktur Data");
    cout << endl;

    //no 8
    cout << "Instruksi 8" << endl;
    findMahasiswaByMataKuliah(L, "Kalkulus");
    cout << endl;
    return 0;
}
