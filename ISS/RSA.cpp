#include<bits/stdc++.h>
using namespace std;

int coprime(int a, int b) {
     return __gcd(a, b);
}

int main() {

    int p = 3, q = 11;
    int n = p * q;
    int z = (p - 1) * (q - 1);

    cout << "Z: " << z << endl;

    int e;
    /*
    srand((unsigned) time(NULL));
    while(1) {
        e = 1 + (rand() % z);
        if(coprime(e, z)) {
            cout << "E: " << e << endl;
            break;
        }
    }

    */

    cout << "Enter a number greater than 1 and less than " << z << ": ";
    cin >> e;

    int d;
    for(d=1; d<z; d++) {
        if((d * e)%z == 1)
            break;
    }

    cout << "D: " << d << endl;

    string mess;
    cout << "Enter the message to be encrypted: ";
    cin >> mess;

    int message;
    if(mess == "hi") {
        message = 2;
    }
    else if(mess == "hello") {
        message = 5;
    }

    // Encryption c = (msg ^ e) % n
    double c = pow(message, e);
    c = fmod(c, n);
    cout << "Encrypted data: " << c << endl;

    // Decryption m = (c ^ d) % n
    double m = pow(c, d);
    m = fmod(m, n);
    cout << "Decrypted data: " << m << endl;

    if(m == 2) {
        cout << "Decrypted message: " << mess << endl;
    }
    else if(m == 5) {
        cout << "Decrypted message: " << mess << endl;
    }

    return 0;
}
