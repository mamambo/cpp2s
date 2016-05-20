#include<stdio.h>
#include<stdlib.h>

//using namespace std;

int main(int args, char * argv[])
{
    int n;
    scanf("%d", &n);
    int** d = (int**)malloc((n) * sizeof(int*));
    for (int i = 1; i <= n; i++) {
        d[i] = (int*) malloc (n * sizeof(int));
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            d[i][j] = i * j;
        }
    }
    int x1, y1, x2, y2;
    x1 = 1;
    while (2 < 3) {
        scanf ("%d", &x1);
        if (x1 == 0) {
            break;
        }
    scanf("%d %d %d", &y1, &x2, &y2);
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    } }
    free(d);
    return 0;
}
