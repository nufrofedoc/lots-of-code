#include <stdio.h>
#include <stdbool.h>

#define ALLOCATE_SIZE 1000

int input_array(int a[], int max_size)
{
    int top = 0;

    while (true)
    {
        int x;
        scanf("%d", &x);
        if (x == 0 || top == max_size) break;
        a[top] = x;
        top++;
    }
    return top;
}

void print_array(int a[], int N)
{
    for (int i = 0; i < N; ++i)
        printf("%3d ", a[i]);
    printf("\n");
}

void insert_sort(int a[], int N)
{
    for (int i = 1; i < N; ++i)
    {
        int k = i;
        while (k > 0 && a[k-1] > a[k])
        {
            int tmp = a[k-1];
            a[k-1] = a[k];
            a[k] = tmp;
            k -= 1;
        }
    }
}

int main(int argc, char* argv[])
{
    printf("Enter numbers:");
    int a[ALLOCATE_SIZE];
    int N;

    N = input_array(a, ALLOCATE_SIZE);
    insert_sort(a, N);
    print_array(a, N);

    return 0;
}
