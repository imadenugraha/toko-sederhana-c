#include <stdio.h>
#include <string.h>

struct Barang {
    char nama[50];
    int harga;
    int stok;
};

void tampilkanBarang(struct Barang *daftarBarang, int jumlahBarang) {
    printf("\n====== Daftar Barang ======\n");
    printf("No  Nama Barang     Harga   Stok\n");
    printf("-------------------------------\n");

    for(int i = 0; i < jumlahBarang; i++) {
        printf("%-3d %-15s Rp.%-7d %d\n",
            i + 1,
            daftarBarang[i].nama,
            daftarBarang[i].harga,
            daftarBarang[i].stok);
    }
}

// TODO: Buatlah fungsi untuk:
// 1. Menambah barang baru ke dalam daftar
// 2. Membeli barang (mengurangi stok)
// 3. Menghitung total pembelian
// 4. Mencari barang berdasarkan nama

int main() {
    struct Barang daftarBarang[100] = {
        {"Pensil", 3000, 100},
        {"Buku", 5000, 50},
        {"Penghapus", 2000, 75},
    };

    int jumlahBarang = 3;

    int pilihan;
    do {
        printf("\n=== TOKO ALAT TULIS ===\n");
        printf("1. Lihat Daftar Barang\n");
        printf("2. Tambah Barang Baru\n");
        printf("3. Beli Barang\n");
        printf("4. Cari Barang\n");
        printf("0. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);
    
        switch (pilihan) {
        case 1:
            tampilkanBarang(daftarBarang, jumlahBarang);
            break;
        
        default:
            break;
        }
    } while (pilihan != 0);

    return 0;
}
