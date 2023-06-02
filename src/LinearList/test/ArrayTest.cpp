#include <iostream>
#include "Array.h"
using namespace std;

int main(){
    // ��������
    Array<int> array{1, 2, 3, 4};
    cout << "At begin: " << endl << array;
    // ��������
    array.insert(2, 5);
    array.insert({{2, 6}, {2, 7}});
    cout << "Insert 5,6,7 in index 2: " << endl << array;
    // �Ƴ�����
    array.remove(1);
    cout << "Remove element in index 1: " << endl << array;
    // �����Զ�����
    array.append({1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1});
    cout << "Add a lot of numbers: " << endl << array;
    // �����Զ�����
    array.remove(0, 14);
    cout << "Remove a lot of numbers: " << endl << array;
    // ���Զ�ȡ����
    cout << "Element at index 1: " << array[1] << endl;
    cout << "Element at index 2: " << array.find(2) << endl;
    // �����޸�����
    array[3] = 10;
    cout << "Change element at index 3 to 10: " << array[3] << endl;
    array.setValue(4, 12);
    cout << "Change element at index 4 to 12: " << array[4] << endl;
    cout << array;
    // ���Ա�������
    cout << "Every element add 1: " << endl;
    array.forEach(0, array.size(), [](int &tmp){ tmp += 1;});
    cout << array;
    // ���Բ���Ԫ��
    cout << "Element 13 at index: " << array.getPos(13) << endl;
    return 0;
}
