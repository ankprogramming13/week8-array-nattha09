#include <iostream>

using namespace std;

int main () {

        char name[] = {"Saovplak"};
        int nameLength = 0;
        cout << name <<endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char Saovplak[8];
        for (nameLength = 0; nameLength <7; nameLength++) {
            Saovplak[nameLength] = name [6-nameLength]+1;
        }
        Saovplak[8] = '\0';

        cout << Saovplak << endl;

        return 0;
}
