

#include <stdio.h>
  
// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i==1 || i==n || j==1 || j==m)            
                printf("*");            
            else
                printf(" ");            
        }
        printf("\n");
    }
  
}
  
// Main function



int main()
{
    int rows =0, columns = 0;
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("\nenter the number of columns : ");
    scanf("%d",&columns);
    print_rectangle(rows, columns);
    return 0;
}
