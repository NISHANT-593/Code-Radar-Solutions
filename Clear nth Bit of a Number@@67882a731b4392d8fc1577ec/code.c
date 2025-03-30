int clearBit(int N, int K) {
    return (N & (~(1 << (K - 1))));
    printf("%d %d: %d\n", N, K, clearBit(N, K));
}