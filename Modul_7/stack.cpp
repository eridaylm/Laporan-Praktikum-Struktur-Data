#include "stack.h"

void createStack(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == MAKS;
}

void push(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "stack penuh" << endl;
    } else {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(Stack &S) {
    infotype x = -1;
    if (isEmpty(S)) {
        cout << "stack kosong" << endl;
    } else {
        x = S.info[S.top];
        S.top--;
    }
    return x;
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack bantu;
    createStack(bantu);
    while (!isEmpty(S)) {
        push(bantu, pop(S));
    }
    S = bantu;
}

void pushAscending(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "stack penuh" << endl;
        return;
    }
    int i = S.top;
    while (i >= 1 && S.info[i] > x) {
        S.info[i + 1] = S.info[i];
        i--;
    }
    S.info[i + 1] = x;
    S.top++;
}

void getInputStream(Stack &S) {
    char c;
    while (cin.get(c) && c != '\n') {
        if (c >= '0' && c <= '9') {
            push(S, c - '0');
        }
    }
}