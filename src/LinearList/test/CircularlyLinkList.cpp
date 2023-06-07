#include "CircularlyLinkList.h"
using namespace std;

int main(){
    // ��ʼ������
    CircularlyLinkList<int> circularlyLinkList{1, 2, 3, 4};
    cout << "At begin: " << endl << circularlyLinkList;
    // ���Ԫ��
    circularlyLinkList.append({5, 6, 7});
    cout << "Add 5,6,7 to the end: " << endl << circularlyLinkList;
    // ����Ԫ��
    circularlyLinkList.insert({{2, 8}, {2, 9}});
    cout << "Insert 8,9 to index 2: " << endl << circularlyLinkList;
    // ɾ��Ԫ��
    circularlyLinkList.remove(2, 5);
    cout << "Remove elements index between 2 and 5: " << endl << circularlyLinkList;
    // ��ȡԪ��ֵ
    cout << "Element at index 2 is " << circularlyLinkList[2] << endl;
    cout << "Element at index 3 is " << circularlyLinkList.find(3) << endl;
    // �޸�Ԫ��ֵ
    circularlyLinkList[2] = 10;
    cout << "Change element at index 2 to " << circularlyLinkList[2] << endl;
    circularlyLinkList.setValue(3, 12);
    cout << "Change element at index 3 to " << circularlyLinkList[3] << endl;
    cout << circularlyLinkList;
    // ��������
    cout << "Every element add 1: " << endl;
    circularlyLinkList.forEach(0, circularlyLinkList.size(), [](int &tmp){ tmp += 1;});
    cout << circularlyLinkList;
    // ���Ҳ���
    cout << "Element 13 at index " << circularlyLinkList.getPos(13) << endl;

    return 0;
}