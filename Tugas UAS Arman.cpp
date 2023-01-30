#include <iostream>
#include <stdlib.h>

using namespace std;

int P_NO = 1;
int BENAR = 0;
int SALAH = 0;
bool pertanyaan[10] = {true , true , true , true , true , true , true , true , true , true};

void Pembukaan();
void pertanyaan_acak();
void tampilan();
void soal (string soal, string a, string b, string c, string d, char jawaban_benar);
void Hasil();

int main ()
{
    Pembukaan();
    tampilan();
    return 0;
}

struct penjelasan
{
    string tiga;
};

void Pembukaan()
{

    string go;
    do{
    system("cls");
    penjelasan no;
    int nilai[2] = {6,10};
    cout << "Hallo Semuanya !!! " << endl << endl;
    cout << "\t\t^^^^^^^^^^ Selamat Datang Di Game Quis ^^^^^^^^^^" << endl << endl;
    cout << "Penjelasan : " << endl;
    cout << "1. Ada 10 soal" << endl;
    cout << "2. Jika ingin lulus, jawab " << nilai[0] << "-" << nilai[1] << " soal dengan benar" << endl;
    no.tiga = "3. Game ini tidak dapat di ulang/hanya satu kali kesempatan";
    cout << no.tiga << endl;
    cout << "4. Semangat !!!" << endl << endl;
    cout << "Untuk memulai game, silahkan masukan huruf (z) : " ;
    cin >> go;
    }while(go == "y");
}

void tampilan()
{
    system("cls");
    cout << "Pertanyaan No : " << P_NO << "\t\tPertanyaan Yang Benar : " << BENAR << "\t\tPertanyaan Yang Salah : " << SALAH << endl << endl;
    cout << "Silahkan isi dengan memasukan a/b/c/d" << endl << endl;
    pertanyaan_acak();
}

void pertanyaan_acak()
{
    bool sisa_pertanyaan = false;
    for(int i=0; i<10; i++)
    {
        if(pertanyaan[i])
        {
            sisa_pertanyaan = true;
            break;
        }
    }
    while(sisa_pertanyaan)
    {
        int no = rand()%10;
        if(pertanyaan[no])
        {
            pertanyaan[no] = false;
            switch(no)
            {
            case 0 :
                soal("# Dalam satu bait di dalam puisi, terdapat .... baris " , "2" , "3", "4" , "5", 'c');
                break;
            case 1 :
                soal("# Cerita yang dibuat oleh pengarang berdasarkan khayalan/dunia rekaan pengarang, merupakan pengertian dari cerita ? " , "Fiksi" , "Non-Fiksi" , "Legenda" , "Sejarah Ilmiah" , 'a');
                break;
             case 2 :
                soal("# 5 x 5 = ? " , "10" , "15", "25" , "30", 'c');
                break;
            case 3 :
                soal("# 10 + 75 = ? " , "80" , "65" , "70" , "85" , 'd');
                break;
            case 4 :
                soal("# Presiden pertama di negara indonesia adalah ? " , "Soeharto" , "Soekarno", "Jokowi" , "Megawati", 'b');
                break;
            case 5 :
                soal("# Hewan endemik yang ada di kalimantan adalah ? " , "Harimau Sumatra" , "Cendrawasih" , "Komodo" , "Pesut Mahakam" , 'd');
                break;
            case 6 :
                soal("# Hewan yang berkembang biak dengan cara ovipar adalah ? " , "Gajah" , "Bebek", "Paus" , "Kucing", 'b');
                break;
            case 7 :
                soal("# Hewan yang berkembang biak dengan cara vivipar adalah ? " , "Kecoa" , "Ayam Betian" , "Singa" , "Ular" , 'c');
                break;
            case 8 :
                soal("# Ada berapa jumlah rukun iman ? " , "6" , "5", "4" , "7", 'a');
                break;
            case 9 :
                soal("# Rukun iman ke 3, yaitu iman kepada ? " , "Rusul-rosul Allah" , "Kitab-kitab Allah" , "Malaikat-malaikat Allah" , "Hari Akhir" , 'b');
                break;

            }
        }
    }
    Hasil();
}

void Hasil()
{
    system ("cls");
    cout << "Total Pertanyaan = " << "10" << endl;
    cout << "Pertanyaan Yang Benar = " << BENAR << endl;
     if (BENAR > SALAH)
        cout << "Hasil = Lulus" << endl << endl;
    else if(SALAH > BENAR)
        cout << "Hasil = Gagal" << endl << endl;
    else
        cout << "Hasil = Betul 5, gagal aja ya :)" << endl << endl;
        cout << "Ok, selamat dengan hasilnya :)" << endl;
}

void soal (string soal, string a, string b, string c, string d, char jawaban_benar)
{
    cout << soal << endl;
    cout << "A.\t" << a << endl;
    cout << "B.\t" << b << endl;
    cout << "C.\t" << c << endl;
    cout << "D'\t" << d << endl;
    char jawab;
    cin >> jawab;
    if (jawab == jawaban_benar)
        BENAR++;
    else
        SALAH++;
    P_NO++;
    tampilan();
}

