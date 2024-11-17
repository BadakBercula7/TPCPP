#include <iostream>
#include "MLL.h"

using namespace std;

void createList(ListMahasiswa &L){
    L.first = nullptr;
}

adrMahasiswa createElementMahasiswa(string nama, string nim){
    adrMahasiswa P = new elementMahasiswa;
    P->info.Nama = nama;
    P->info.Nim = nim;
    P->MatkulP = nullptr;
    P->next = nullptr;
    return P;
}

adrMataKuliah createElementMataKuliah(string namaMatkul){
    adrMataKuliah P = new elementMataKuliah;
    P->info.NamaMatkul = namaMatkul;
    P->next = nullptr;
    return P;
}

//no1
void addMahasiswa(ListMahasiswa &L, string nama, string nim){
    adrMahasiswa P = createElementMahasiswa(nama, nim);
    P->next = L.first;
    L.first = P;
    cout << "Mahasiswa berhasil ditambahakan" << endl;
}

//no2
void addMataKuliah(ListMahasiswa &L, string nim, string namaMatkul){
    adrMahasiswa P = L.first;
    while (P != nullptr && P->info.Nim != nim) {
        P = P->next;
    }

    if (P == nullptr) {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
        return;
    }

    adrMataKuliah Q = createElementMataKuliah(namaMatkul);
    Q->next = P->MatkulP;
    P->MatkulP = Q;
    cout << "Matakuliah berhasil ditambahakan" << endl;

}

//no4&5
void deleteMataKuliah(ListMahasiswa &L, string nim, string namaMatkul){
    adrMahasiswa P = L.first;
    while (P != nullptr && P->info.Nim != nim){
        P = P->next;
    }

    adrMataKuliah temp = nullptr;
    adrMataKuliah Q = P->MatkulP;

    while (Q != nullptr && Q->info.NamaMatkul != namaMatkul) {
        temp = Q;
        Q = Q->next;
    }

    //no5
    if (Q == nullptr) {
        cout << "ERROR -- Mata kuliah " << namaMatkul << " tidak ditemukan." << endl;
        return;
    }

    if (temp == nullptr) {
        P->MatkulP = Q->next;
    } else {
        temp->next = Q->next;
    }

    delete Q;
}

//no7&8
void findMahasiswaByMataKuliah(const ListMahasiswa& L, string namaMatkul){
    adrMahasiswa P = L.first;
    bool found = false;

    cout << "Mahasiswa yang mengambil " << namaMatkul << ":" << endl;
    while (P != nullptr) {
        adrMataKuliah Q = P->MatkulP;
        while (Q != nullptr) {
            if (Q->info.NamaMatkul == namaMatkul) {
                cout << "- " << P->info.Nama << " (NIM: " << P->info.Nim << ")" <<endl;
                found = true;
                break;
            }
            Q = Q->next;
        }
        P = P->next;
    }

    //no8
    if (!found) {
        cout << "Tidak ada mahasiswa." << endl;
    }
}

//no3&6
void printList(ListMahasiswa &L){
    adrMahasiswa P = L.first;
    while (P != nullptr) {
        cout << "Mahasiswa: " << P->info.Nama << " (NIM: " << P->info.Nim << ")";
        adrMataKuliah Q = P->MatkulP;
        if (Q == nullptr) {
            cout << " - Tidak ada mata kuliah.\n";
        } else {
            cout << " - ";
            while (Q != nullptr) {
                cout << Q->info.NamaMatkul;
                if (Q->next != nullptr) cout << ", ";
                Q = Q->next;
            }
            cout << endl;
        }
        P = P->next;
    }
}
