
#include <iostream>
using namespace std;

int main()
{
    // siswa mempunyai 2 nilai yaitu matematika dan fisika
    //kemudian dihitung reratanya, jika rerata lebih dari 60
    //maka dari 70 dan dan jika tidak kedduannnya maka
    //dinyatakan tidak lulus

    float nMat, nFisika, rerata;
    string status;

    cout << "memasukan nilai matematika";
    cin >> nMat;
    cout << "memasukan nilai fisika";
    cin >> nFisika;

    rerata = (nFisika + nMat)/2;

    if (rerata >= 60) {
        status = "lulus jalur rerata";
    }
    else if (nMat >= 70) {
        status = "lulus jalur matematika";
    }
    else {
        status = "tidak lulus";
    }

    cout << "anda dinyatakan =" << status << endl;

    system("pause");

}

