#include<stdio.h>

void toh(int n, char a, char b, char c, int *nr)
{
    if (n == 1){
        printf("\nMutam discul 1 de la %c la %c\n", a, c);
        (*nr)++;
        return;
    }

    toh(n-1, a, c, b, nr);
    (*nr)++;
    printf("\nMutam discul %d De la %c la %c\n", n, a, c);

    toh(n-1, b, a, c, nr);
}

int main()
{
    int N;
    printf("Introduceti nr: ");
    scanf("%d",&N);
    
    int nr = 0;

    printf("\n");
    toh(N, 'A', 'B', 'C', &nr);
    printf("\nNumarul minim de mutari este: %d\n", nr);

    return 0;
}
