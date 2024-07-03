// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void countNotes(int amount) {
    int notes[8] = { 500, 200, 100, 50, 20, 10, 5, 1 };
    int noteCount[8] = { 0 };

    for (int i = 0; i < 8; i++) {
        if (amount >= notes[i]) {
            noteCount[i] = amount / notes[i];
            amount -= noteCount[i] * notes[i];
        }
    }

    cout << "So to tien cua moi loai\n";
    for (int i = 0; i < 8; i++) {
        if (noteCount[i] != 0) {
            cout << "Menh gia " << notes[i] << ":\t" << noteCount[i] << "\n";
        }
    }

    int totalNotes = 0;
    for (int i = 0; i < 8; i++) {
        totalNotes += noteCount[i];
    }
    cout << "Tong so to nhan duoc: " << totalNotes << "\n";
}

int main() {
    int amount;
    cout << "Nhap so tien can rut: ";
    cin >> amount;

    countNotes(amount);

    return 0;
}



   

