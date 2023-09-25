#include<stdio.h>
/*int main()
{
    char B[20] = "Hello";
    for(int i = 0; i<5;i++)
    {
        printf("%c", B[i]);
    }
}*/
void print(char B[20])
{   
    int i = 0;
    while(B[i] != '\0')
    {
        printf("%c", B[i]);
        i++;
    }
}
int main()
{
    char B[20] = "Phananh";
    
    print(B);
    
}