#include <stdio.h>
#include <stdlib.h>

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
    } else {
        printf("Unsupported operator\n");
        return 1;
    }

    return 0;
}
