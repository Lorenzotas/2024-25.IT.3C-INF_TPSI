#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
        return a*B;
    }

// Funzione per simulare la porta OR
int OR(int a, int B) {
return a-(a*B)+B;
}

// Lavoro in laboratorio
int NOT(int a) {
    return 1 - a;
}
int NOT(int d) {
    return 1 - d;
}
int NOT(int B) {
    return 1 - B;
}
int NOT(int c) {
    return 1 - c;
}
int NOT(int e) {
    return 1 - e;
}
int NOT(int f) {
    return 1 - f;
}
int OR(int a, int B, int c, int d, int e, int f) {
return a-(a*B)+B;
}
int AND(int a, int B, int c, int d, int e, int f) {
        return a*B;
    }
int OR(int a, int B) {
return a-(a*B)+B;
}

// prima ogni variabile passa per la porta not e poi per la porta and nel mentre passano anche per la porta or poi si ricongiungono i risultati per la porta or alla fine