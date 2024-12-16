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
