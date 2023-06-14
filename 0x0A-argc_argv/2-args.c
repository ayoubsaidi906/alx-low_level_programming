#include <stdio.h>
/**
 *main - Print all argument folowed bay new lin
 *@argc: Integer
 *@argv: String
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
