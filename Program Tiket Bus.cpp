/*
Farhan Dzaky Aldias (2217051073)
Fitra Dwi Nugraha (2257051007)
Suntan Jundi Khalid (2217051021)
 */

#include <iostream>
#include <conio.h>

using namespace std;

// Variabel untuk universal
int tujuan, waktu, pilihan_1, pilihan_2, size, id, uang, kembalian, eks_1, eks_2, bns_1, bns_2;
char bangku_1, bangku_2;
string nama;
char bangku_bns [50] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7'} ;
char bangku_eks [50] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
 'T', 'U', 'V', 'W', 'X', 'Y'} ;

// fungsi/procedure untuk memanggil header/judul dari tampilan program
void header () {
	cout << "=========================================================================" << endl;
	cout << "------------------------------- Blue Bus --------------------------------" << endl;
	cout << "-------------------- Tempat Pesan Tiket Bus Termurah --------------------" << endl;
	cout << "=========================================================================" << endl;
}

// fungsi/procedure untuk memanggil tampilan footer
void footer () {
	cout << endl << endl ;
	cout << "=========================================================================" << endl;
	cout << "Terima Kasih Telah Menggunakan Jasa Layanan Pada Aplikasi Blue Bus HEHE :3" ;
}

// fungsi/procedure untuk menampilkan tampilan menu awal
void menu_awal() {
	header ();
	cout << endl ;
	cout << "                    PILIH JURUSAN YANG ANDA INGINKAN                     " << endl;
	cout << " _______________________________________________________________________ " << endl;
	cout << "| No. |       Kota Keberangkatan       |          Kota Tujuan           |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << "|  1  | Jakarta                        | Bandung                        |" << endl;
	cout << "|  2  | Bandung                        | Jakarta                        |" << endl;
	cout << "|  3  | Jakarta                        | Lampung                        |" << endl;
	cout << "|  4  | Lampung                        | Jakarta                        |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda (masukkan angka yang ingin anda pilih) : "; cin >> tujuan;
	system ("cls");
	if (tujuan < 1 || tujuan > 4) { // pengkondisian jika inputan salah
		system ("cls");
		cout << "Mohon Maaf. Tujuan yang anda pilih belum tersedia." ;
		cout << " Silahkan tekan apapun untuk memilih kembali" ;
		getch ();
		system ("cls");
		menu_awal ();
	}
}

// fungsi/procedure untuk menampilkan tampilan menu tanggal & waktu keberangkatan	
void menu_waktu () {
	header ();
	cout << endl ;
	cout << "                      TENTUKAN WAKTU KEBERANGKATAN                       " << endl;
	cout << " _______________________________________________________________________ " << endl;
	cout << "| No. |       Hari Keberangkatan       |       Jam Keberangkatan        |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << "|  1  | Sabtu, 15 Agustus 2022         | 09.00 WIB                      |" << endl;
	cout << "|  2  | Sabtu, 15 Agustus 2022         | 21.00 WIB                      |" << endl;
	cout << "|  3  | Minggu, 16 Agustus 2022        | 09.00 WIB                      |" << endl;
	cout << "|  4  | Minggu, 16 Agustus 2022        | 21.00 WIB                      |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda (masukkan angka yang ingin anda pilih) : "; cin >> waktu;
	system ("cls");
	if (waktu < 1 || waktu > 4) { // pengkondisian jika inputan tidak sesuai
		system ("cls");
		cout << "Mohon Maaf. Waktu keberangkatan yang anda pilih tidak tersedia." ;
		cout << " Silahkan tekan apapun untuk memilih kembali." ;
		getch ();
		system ("cls");
		menu_waktu ();
	}
}

// Untuk harga bus jurusan Jakarta-Bandung
void bus_1 () {
	header ();
	cout << endl ;
	cout << "                        TENTUKAN TIPE KELAS BUS                          " << endl;
	cout << " _______________________________________________________________________ " << endl;
	cout << "| No. |           Tipe Kelas           |             Harga              |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << "|  1  | Eksekutif                      | Rp. 180.000,00                 |" << endl;
	cout << "|  2  | Bisnis                         | Rp. 150.000,00                 |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda (masukkan angka yang ingin anda pilih) : "; cin >> pilihan_1;
	system ("cls");
	if (pilihan_1 < 1 || pilihan_1 > 2) { // pengkondisian jika inputan salah
		system ("cls");
		cout << "Mohon Maaf. Anda memasukan data yang salah." ;
		cout << " Silahkan tekan apapun untuk memilih kembali." ; 
		getch ();
		system ("cls");
		bus_1 ();
	}
	
}

// Untuk Harga bus jurusan jakarta-lampung 
void bus_2 () {
	header ();
	cout << endl ;
	cout << "                        TENTUKAN TIPE KELAS BUS                          " << endl;
	cout << " _______________________________________________________________________ " << endl;
	cout << "| No. |           Tipe Kelas           |             Harga              |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << "|  1  | Eksekutif                      | Rp. 280.000,00                 |" << endl;
	cout << "|  2  | Bisnis                         | Rp. 250.000,00                 |" << endl;
	cout << "|_____|________________________________|________________________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda (masukkan angka yang ingin anda pilih) : "; cin >> pilihan_2;
	cout << endl << endl;
	system ("cls");
	if (pilihan_2 < 1 || pilihan_2 > 2) { // pengkondisian jika inputan salah
		system ("cls");
		cout << "Mohon Maaf. Anda memasukan data yang salah." ;
		cout << " Silahkan tekan apapun untuk memilih kembali." ; 
		getch ();
		system ("cls");
		bus_2 ();
	}
}

// BANGKU BUS BISNIS
void bangku_bisnis (){
	header ();
	cout << endl ;
	cout << "TENTUKAN TEMPAT DUDUK ANDA" << endl;
	cout << "     ________________ " << endl;
	cout << "    |          SUPIR |" << endl;
	cout << "    |                |" << endl;
	cout << "    | [D][C]  [B][A] |" << endl;
	cout << "    | [H][G]  [F][E] |" << endl;
	cout << "    | [L][K]  [J][I] |" << endl;
	cout << "    | [P][O]  [N][M] |" << endl;
	cout << "    | [T][S]  [R][Q] |" << endl;
	cout << "    | [X][W]  [V][U] |" << endl;
	cout << "    |         [Z][Y] |" << endl;
	cout << "    |         [2][1] |" << endl;
	cout << "    |[7][6][5][4][3] |" << endl;
	cout << "    |________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda : "; cin >> bangku_1;
	size = sizeof (bangku_bns) / sizeof (bangku_bns[0]);
	for (int i = 0; i < size; i++ ) {
		if (bangku_1 == bangku_bns [i]) { // untuk menampilkan konfirmasi bangku
			cout << "Bangku yang anda pilih adalah bangku " << bangku_bns [i];
			getch ();
			break ; 
		} else if (i > 33) { // untuk pengkondisian jika inputan salah
			cout << "Bangku yang anda pilih tidak tersedia. Silahkan memulai ulang kembali" ;
			getch ();
			break ;
		}
	}
}

// BANGKU BUS EKSEKUTIF
void bangku_eksekutif (){
	header ();
	cout << endl ;
	cout << "TENTUKAN TEMPAT DUDUK ANDA" << endl;
	cout << "     ________________ " << endl;
	cout << "    |          SUPIR |" << endl;
	cout << "    |                |" << endl;
	cout << "    | [D][C]  [B][A] |" << endl;
	cout << "    | [H][G]  [F][E] |" << endl;
	cout << "    | [L][K]  [J][I] |" << endl;
	cout << "    | [P][O]  [N][M] |" << endl;
	cout << "    |         [R][Q] |" << endl;
	cout << "    |         [T][S] |" << endl;
	cout << "    |[Y][X][W][V][U] |" << endl;
	cout << "    |________________|" << endl;
	cout << endl << "Masukkan Pilihan Anda : "; cin >> bangku_2;
	size = sizeof (bangku_eks) / sizeof (bangku_eks[0]);
	for (int i = 0; i < size; i++ ) {
		if (bangku_2 == bangku_eks [i]) { // untuk menampilkan konfirmasi bangku
			cout << "Bangku yang anda pilih adalah bangku " << bangku_eks [i];
			getch ();
			break ; 
		} else if (i > 25) { // untuk pengkondisian jika inputan tidak sesuai
			cout << "Bangku yang anda pilih tidak tersedia. Silahkan memulai ulang kembali" ;
			getch ();
			break ;
		}
	}
}

// fungsi/procedure untuk menampilkan tampilan menu input biodata penumpang
void biodata () {
	system ("cls");
	header ();
	cout << "\nMasukkan nama penumpang\t\t\t: "; getline (cin >> ws, nama);
	cout << "\nMasukkan nomor identitas penumpang\t: "; cin >> id;
}

// fungsi/procedure untuk menampilkan menu pembayaran
void pembayaran () {
	eks_1 = 180000 ; // Uang bus eksekutif Jakarta-Bandung 
	bns_1 = 150000 ; // Uang bus bisnis Jakarta-Bandung
	eks_2 = 280000 ; // Uang bus eksekutif Jakarta-Lampung
	bns_2 = 250000 ; // Uang bus bisnis Jakarta-Lampung
	
	if ( (tujuan == 1 && pilihan_1 == 1) || (tujuan == 2 && pilihan_1 == 1)) { // Bus Eksekutif JKT-BDG
		cout << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Formulir Pembayaran"  << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "MASUKKAN NOMINAL TANPA TANDA '.' !" << endl;
		cout << "Harga Tiket\t\t\t: Rp. 180.000,00" << endl ;
		cout << "Silahkan Masukkan Uang Anda\t: Rp. " ; cin >> uang ;
		while (uang < eks_1) {
			cout << "Uang yang anda masukkan kurang. Silahkan bayar kembali : Rp. "; cin >> uang;
		} 
		
		kembalian = uang - eks_1 ;
		cout << "------------------------------------------------"<<endl;
		cout << "Kembalian anda : Rp. " << kembalian ;
		cout << endl;
		cout << "Tekan apapun untuk mencetak tiket anda.";
		getch ();
		
	} else if ( (tujuan == 1 && pilihan_1 == 2) || (tujuan == 2 && pilihan_1 == 2)) { // Bus Bisnis JKT-BDG
		cout << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Formulir Pembayaran"  << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "MASUKKAN NOMINAL TANPA TANDA '.' !" << endl;
		cout << "Harga Tiket\t\t\t: Rp. 150.000,00" << endl ;
		cout << "Silahkan Masukkan Uang Anda\t: Rp. " ; cin >> uang ;
		while (uang < bns_1) {
			cout << "Uang yang anda masukkan kurang. Silahkan bayar kembali : Rp. "; cin >> uang;
		} 
		
		kembalian = uang - bns_1 ;
		cout << "------------------------------------------------"<<endl;
		cout << "Kembalian anda : Rp. " << kembalian ;
		cout << endl;
		cout << "Tekan apapun untuk mencetak tiket anda.";
		getch ();
		
	} else if ( (tujuan == 3 && pilihan_2 == 1) || (tujuan == 4 && pilihan_2 == 1)) { // Bus Eksekutif JKT-LPG
		cout << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Formulir Pembayaran"  << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "MASUKKAN NOMINAL TANPA TANDA '.' !" << endl;
		cout << "Harga Tiket\t\t\t: Rp. 280.000,00" << endl ;
		cout << "Silahkan Masukkan Uang Anda\t: Rp. " ; cin >> uang ;
		while (uang < eks_2) {
			cout << "Uang yang anda masukkan kurang. Silahkan bayar kembali : Rp. "; cin >> uang;
		} 
		
		kembalian = uang - eks_2 ;
		cout << "------------------------------------------------"<<endl;
		cout << "Kembalian anda : Rp. " << kembalian ;
		cout << endl;
		cout << "Tekan apapun untuk mencetak tiket anda.";
		getch ();
		
	} else if ( (tujuan == 3 && pilihan_2 == 2) || (tujuan == 4 && pilihan_2 == 2)) { // Bus Bisnis JKT-LPG
		cout << endl << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Formulir Pembayaran"  << endl ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "MASUKKAN NOMINAL TANPA TANDA '.' !" << endl;
		cout << "Harga Tiket\t\t\t: Rp. 250.000,00" << endl ;
		cout << "Silahkan Masukkan Uang Anda\t: Rp. " ; cin >> uang ;
		while (uang < bns_2) {
			cout << "Uang yang anda masukkan kurang. Silahkan bayar kembali : Rp. "; cin >> uang;
		} 
		
		kembalian = uang - bns_2 ;
		cout << "------------------------------------------------"<<endl;
		cout << "Kembalian anda : Rp. " << kembalian; 
		cout << endl;
		cout << "Tekan apapun untuk mencetak tiket anda." << endl << endl;
		getch ();
		
	}
}

// fungsi/procedure untuk menampilkan tampilan barcode tiket
void tiketz () {
	system("cls");
	cout << endl;
	cout << "\t\t __________________________________ " << endl;
	cout << "\t\t|        BARCODE TIKET LUWH        |" << endl;
	cout << "\t\t|__________________________________|" << endl;
	cout << "\t\t|                                  |" << endl;
	cout << "\t\t|   ____________________________   |" << endl;
	cout << "\t\t|  |                            |  |" << endl;
	cout << "\t\t|  | ||_||||___|||||_|||_|_|_|| |  |" << endl;
	cout << "\t\t|  | || ||||   ||||| ||| | | || |  |" << endl;
	cout << "\t\t|  |____________________________|  |" << endl;
	cout << "\t\t|                                  |" << endl;
	cout << "\t\t|--------------BLUEBUS-------------|" << endl;
	cout << "\t\t|__________________________________|" << endl;
}

// program utama
int main () {
	system ("color B");
	menu_awal ();
	menu_waktu ();
		if (tujuan == 1 || tujuan == 2) {
			bus_1 ();
		} else if (tujuan == 3 || tujuan == 4) {
			bus_2 ();
		}
			if (pilihan_1 == 1 || pilihan_2 == 1) {
				bangku_eksekutif ();
			} else if (pilihan_1 == 2 || pilihan_2 == 2) {
				bangku_bisnis ();
			}
	biodata ();
	pembayaran ();	
	tiketz ();
	footer () ;
	getch () ;
	return 0;
}

