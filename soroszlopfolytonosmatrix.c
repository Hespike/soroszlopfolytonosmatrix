#include <stdio.h>

#define N 3

int main() {
    int tomb[N][N];
    int i, j;
    for (i = 0; i < N; ++i) {           //  a különböző ciklusokat egybásba is lehet ágyazni
        for (j = 0; j < N; ++j) {       // jelen esetben N-szer fog lefutni a külső for ciklus
            scanf("%d", &(tomb[i][j])); // és (N*N)-szer a belső
        }
    }
    for (i = 0; i < N; ++i) {            // természetesen itt is és a következőnél is ugyanaz a helyzet
        for (j = 0; j < N; ++j) {
            printf("%d ", tomb[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (j = 0; j < N; ++j) {
        for (i = 0; i < N; ++i) {
            printf("%d ", tomb[i][j]);
        }
        printf("\n");
    }
    return 0;
}
