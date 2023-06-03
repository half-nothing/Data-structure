#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H

#include "Definition.h"

template<typename T>
class List {
public:
    // ������Ա�
    virtual void clear() = 0;

    // �ж����Ա��Ƿ�Ϊ��
    virtual bool isEmpty() = 0;

    // ��ȡ���Ա���
    virtual uint size() = 0;

    // �����Ա�ĩβ���Ԫ��
    virtual bool append(const T &src) = 0;

    // �������Ԫ��
    virtual bool append(const std::initializer_list<T> &src) = 0;

    // �����Ա��м����Ԫ��
    virtual bool insert(uint pos, const T &src) = 0;

    // ��������Ԫ��
    virtual bool insert(const std::initializer_list<std::pair<uint, T>> &src) = 0;

    // �Ƴ�ĳһԪ��
    virtual bool remove(uint pos) = 0;

    // �����Ƴ�Ԫ��
    virtual bool remove(uint start, uint end) = 0;

    // ��ȡĳһԪ��
    virtual T &find(uint pos) = 0;

    // ����ĳһԪ��
    virtual bool setValue(uint pos, const T &src) = 0;

    // ��ȡĳ��Ԫ�ص��±�
    virtual int getPos(const T &src) = 0;

    // ����[]�����
    virtual T &operator[](int pos) = 0;

    // ��start�±굽end�±�������opt����
    virtual void forEach(uint start, uint end, void (*opt)(T &)) = 0;
};

#endif
