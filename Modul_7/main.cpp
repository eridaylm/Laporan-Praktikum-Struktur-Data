#include "stack.h"

int main() {
    cout << "Hello world!" << endl;

    // soal 1: push, pop, balikStack
    cout << "--- Soal 1 ---" << endl;
    Stack S1;
    createStack(S1);
    push(S1, 3);
    push(S1, 4);
    push(S1, 8);
    pop(S1);
    push(S1, 2);
    push(S1, 3);
    pop(S1);
    push(S1, 9);
    printInfo(S1);
    cout << "balik stack" << endl;
    balikStack(S1);
    printInfo(S1);

    // soal 2: pushAscending
    cout << "--- Soal 2 ---" << endl;
    Stack S2;
    createStack(S2);
    pushAscending(S2, 3);
    pushAscending(S2, 4);
    pushAscending(S2, 8);
    pushAscending(S2, 2);
    pushAscending(S2, 3);
    pushAscending(S2, 9);
    printInfo(S2);
    cout << "balik stack" << endl;
    balikStack(S2);
    printInfo(S2);

    // soal 3: getInputStream (ketik angka lalu enter)
    cout << "--- Soal 3 ---" << endl;
    Stack S3;
    createStack(S3);
    getInputStream(S3);
    printInfo(S3);
    cout << "balik stack" << endl;
    balikStack(S3);
    printInfo(S3);

    return 0;
}