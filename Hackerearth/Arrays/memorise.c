#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int a, b[100001];
    for(int i = 0; i < n; i++) 
        b[i] = 0;
    for(int i = 0; i < n; i++) {
        scanf("%lld", &a);
        b[a]++;
    }
    int q;
    scanf("%d", &q);
    long long int c;
    for(int i = 0; i < q; i++) {
        scanf("%lld", &c);
        if(b[c] > 0)
            printf("%lld", b[c]);
        else 
            printf("NOT PRESENT\n");
    }
}