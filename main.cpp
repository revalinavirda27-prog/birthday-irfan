#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void delay(int ms){
    this_thread::sleep_for(chrono::milliseconds(ms));
}

void ketik(string teks, int speed = 35){
    for(char c : teks){
        cout << c;
        cout.flush();
        delay(speed);
    }
    cout << endl;
}

void loadingBar(){
    cout << "[";
    for(int i=0;i<25;i++){
        cout << "#";
        cout.flush();
        delay(60);
    }
    cout << "] DONE" << endl;
}

int main(){
    system("color 0A");
    system("title LAST MESSAGE");

    ketik(">> System starting...");
    delay(700);

    ketik(">> Accessing memory...");
    delay(900);

    ketik(">> Searching someone important...");
    delay(1200);

    loadingBar();
    delay(800);

    ketik("\n>> Found...");
    delay(1000);

    ketik(">> Name : Irfan");
    delay(1200);

    ketik(">> Age : 20");
    delay(1200);

    ketik("\n>> Opening hidden message...");
    delay(1500);

    loadingBar();
    delay(1000);

    ketik("\n>> Message:");
    ketik("======================================");
    delay(800);

    ketik("Selamat ulang tahun sayang...");
    delay(1200);

    ketik("Sehat selalu yaa...");
    delay(1200);

    ketik("Ga kerasa ya, udah 20 tahun aja");
    delay(1400);

    ketik("\nAku cuma mau kamu tau...");
    delay(1500);

    ketik("Semoga semua yang kamu inginkan tercapai");
    delay(1300);

    ketik("Semoga semua capek kamu ada hasilnya");
    delay(1300);

    ketik("Dan semoga kamu selalu kuat jalanin hidup ini");
    delay(1500);

    ketik("\nKalo suatu hari kamu capek...");
    delay(1500);

    ketik("Kalo dunia lagi ga baik ke kamu...");
    delay(1500);

    ketik("Tolong inget ya...");
    delay(1700);

    ketik("Aku selalu ada di sini buat kamu");
    delay(1800);

    ketik("\nBukan cuma hari ini...");
    delay(1500);

    ketik("Tapi setiap hari...");
    delay(1500);

    ketik("\nKarena...");
    delay(1800);

    ketik("Aku bener-bener sayang kamu, maul");
    delay(2200);

    ketik("\nHappy birthday sayangg");
    delay(1500);

    ketik("======================================");

    delay(1000);

    ketik("\n>> Sender : seseorang yang selalu ada buat kamu");
    delay(1000);

    ketik(">> End of message...");
    delay(1500);

    ketik(">> System shutting down...");
    
    return 0;
}