#include <iostream>
#include "Array.h"
using namespace std;

int main(){
    // ��������
    Array<int> arrayTest{1, 2, 3, 4};
    cout << "At begin: " << endl << arrayTest;
    // ��������
    arrayTest.insert(2, 5);
    arrayTest.insert({{2, 6}, {2, 7}});
    cout << "Insert 5,6,7 in index 2: " << endl << arrayTest;
    // �Ƴ�����
    arrayTest.remove(1);
    cout << "Remove element in index 1: " << endl << arrayTest;
    // �����Զ�����
    arrayTest.append({1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1});
    cout << "Add a lot of numbers: " << endl << arrayTest;
    // �����Զ�����
    arrayTest.remove(0, 14);
    cout << "Remove a lot of numbers: " << endl << arrayTest;
    // ���Զ�ȡ����
    cout << "Element at index 1: " << arrayTest[1] << endl;
    cout << "Element at index 2: " << arrayTest.find(2) << endl;
    // �����޸�����
    arrayTest[3] = 10;
    cout << "Change element at index 3 to 10: " << arrayTest[3] << endl;
    arrayTest.setValue(4, 12);
    cout << "Change element at index 4 to 12: " << arrayTest[4] << endl;
    cout << arrayTest;
    // ���Ա�������
    cout << "Every element add 1: " << endl;
    arrayTest.forEach(0, arrayTest.size(), [](int &tmp){ tmp += 1;});
    cout << arrayTest;
    // ���Բ���Ԫ��
    cout << "Element 13 at index: " << arrayTest.getPos(13) << endl;
    return 0;
}
