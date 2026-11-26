#ifndef BSTREE_H_INCLUDED
#define BSTREE_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct Node *address;

struct Node {
    infotype info;
    address left;
    address right;
};

address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void InOrder(address root);
void PreOrder(address root);
void PostOrder(address root);
int hitungNode(address root);
int hitungTotal(address root);
int hitungKedalaman(address root, int start);

#endif
