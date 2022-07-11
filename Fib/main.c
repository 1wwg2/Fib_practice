int main()
{
    int X;

    printf("Enter X: ");
    scanf_s("%d", &X);

    while (X <= 0) {

        printf("Incorrect number, enter  module int type: ");
        scanf_s("%d", &X);

    }
    for (int i = 1; i <= X; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
