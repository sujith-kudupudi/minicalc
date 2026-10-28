#include <stdio.h>
#include <stdlib.h>

/* MinGW/Windows only: stop the runtime from expanding '*' into filenames */
int _CRT_glob = 0;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: minicalc <num> <op> <num>\n");
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[3]);
    char op = argv[2][0];

    if (op == '+') {
        printf("%g\n", a + b);
    } else if (op == '-') {
        printf("%g\n", a - b);
    } else if (op == '*') {
        printf("%g\n", a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Error: division by zero\n");
            return 1;
        }
        printf("%g\n", a / b);
    } else {
        printf("Unsupported operator\n");
        return 1;
    }
    return 0;
}
