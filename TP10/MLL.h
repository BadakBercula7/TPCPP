#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

using namespace std;

typedef struct elementMataKuliah *adrMataKuliah;
typedef struct elementMahasiswa *adrMahasiswa;

struct Mahasiswa{
    string Nama;
    string Nim;
};

struct MataKuliah{
    string NamaMatkul;
};

struct elementMataKuliah{
    MataKuliah info;
    adrMataKuliah next;
};

struct elementMahasiswa{
    Mahasiswa info;
    adrMataKuliah MatkulP;
    adrMahasiswa next;
};

struct ListMahasiswa {
    adrMahasiswa first;
};
void createList(ListMahasiswa &L);
adrMahasiswa createElementMahasiswa(string nama, string nim);
adrMataKuliah createElementMataKuliah(string namaMatkul);
//no1
void addMahasiswa(ListMahasiswa &L, string nama, string nim);
//no2
void addMataKuliah(ListMahasiswa &L, string nim, string namaMatkul);
//no4&5
void deleteMataKuliah(ListMahasiswa &L, string nim, string namaMatkul);
//no7&8
void findMahasiswaByMataKuliah(const ListMahasiswa& L, string namaMatkul);
//no3&6
void printList(ListMahasiswa &L);
#endif // MLL_H_INCLUDED
