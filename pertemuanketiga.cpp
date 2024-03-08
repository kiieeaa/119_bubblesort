#include <iostream>
using namespace std;

int a[20];           //deklarasi array a dengan ukuran 20
int n;              //deklarasi variabel n untuk menyimpan banyak elemen pada array

void input() {      //procedur untuk input
    while (true) {  // looping
        cout << "masukan banyaknya elemen pada array: ";   // output ke layar
        cin >> n;   //input dari pengguna
        if (n <= 20)  //jika n kurang dari atau sama dengan 20
            break;  // keluar dari loop
        else {      // jika n lebih dari 20
            cout << "\narray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }
    }
    cout << endl;                            // output baris kosong
    cout << "=============" << endl;         // output ke layar 
    cout << "masukan elemen array" << endl;  // output ke layar
    cout << "=============" << endl;        // output ke layar {}

    for (int i = 0; i < n; i++) {    //looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke -" << (i + 1) << ": ";  // output ke layar 
        cin >> a[i];                 // input dari pengguna
    }
}

void bubbleSortArray() {   // procedur untuk mengurutkan array dengan metode bobble sort
    int pass = 1;  // step 1
    do {
        for (int j = 0; j <= n - 1 - pass; j++) { //step 2
            if (a[j + 1]) { // step 3
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        pass = pass + 1;  //step 4
    } while (pass <= n - 1); // step 5
}


void display() {
    cout << endl;
    cout << "===========" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "===========" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << n - 1 << endl; // output each array elemen on a new line

    }
    cout << "jumblah pass = " << n - 1 << endl;  //correctly shows the total number of elements
    cout << endl;
}
int main() {

    input();      // memanggil procedur input()
    bubbleSortArray(); // mengurutkan data dengan algoritma bubble sort 
    display(); // memanggil procedur display()
    system("pause");

    return 0;
}




  

















    
