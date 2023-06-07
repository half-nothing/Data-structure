#include "SingleLinkList.h"

using namespace std;

int main() {
    // ��ʼ������
    SingleLinkList<int> singleLinkList{1, 2, 3, 4};
    cout << "At begin: " << endl << singleLinkList;
    // ���Ԫ��
    singleLinkList.append({5, 6, 7});
    cout << "Add 5,6,7 to the end: " << endl << singleLinkList;
    // ����Ԫ��
    singleLinkList.insert({{2, 8}, {2, 9}});
    cout << "Insert 8,9 to index 2: " << endl << singleLinkList;
    // ɾ��Ԫ��
    singleLinkList.remove(2, 5);
    cout << "Remove elements index between 2 and 5: " << endl << singleLinkList;
    // ��ȡԪ��ֵ
    cout << "Element at index 2 is " << singleLinkList[2] << endl;
    cout << "Element at index 3 is " << singleLinkList.find(3) << endl;
    // �޸�Ԫ��ֵ
    singleLinkList[2] = 10;
    cout << "Change element at index 2 to " << singleLinkList[2] << endl;
    singleLinkList.setValue(3, 12);
    cout << "Change element at index 3 to " << singleLinkList[3] << endl;
    cout << singleLinkList;
    // ��������
    cout << "Every element add 1: " << endl;
    singleLinkList.forEach(0, singleLinkList.size(), [](int &tmp){ tmp += 1;});
    cout << singleLinkList;
    // ���Ҳ���
    cout << "Element 13 at index " << singleLinkList.getPos(13) << endl;
    return 0;
}