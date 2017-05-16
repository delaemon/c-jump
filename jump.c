#include <stdio.h>

int Hash(unsigned long long key, int buckets)
{
    long long b = -1;
    long long j = 0;

    while (j < ((long long) buckets))
    {
        b = j;
        key = key * 2862933555777941757 + 1;
        j = ((long long) (((double) (b + 1)) * (((double)(((long long) 1) << 31)) / ((double)((key >> 33)+1)))));
    }
    return (int) b;
}

int main(int argc, char *argv[])
{
    int hash = Hash(10863919174838991, 11);
    printf("hash: %d\n", hash);
}
