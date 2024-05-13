#include <stdio.h>
void fibonacci(int n) 
{
    int i, num1 = 0, num2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) 
	{
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
}
int main() 
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

