#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[2][2] = {{1, 2}, {3, 4}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d \n", mat[i][j]);
        }
    }
    system("pause");
    return 0;
}