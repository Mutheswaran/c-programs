#include <stdio.h>
int reverse(int);
int main(){
    int num, rev_num, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    rev_num = reverse(num);
    printf("Reversed number is: %d", rev_num);  
    return 0;
}

int reverse(int n)
{
    int rem, rev = 0;
    while (n != 0)
	{
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
