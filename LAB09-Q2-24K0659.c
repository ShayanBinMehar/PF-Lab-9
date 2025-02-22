#include <stdio.h>

int findUniqueElements(int arr[], int n)
{

    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {

            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n = n - 1;
            }
            else
            {
                j++;
            }
        }
    }
    return n;
}

int main()
{

    int array[100], numOfElement, n;

    printf("Enter the number for element : \n");
    scanf("%d", &n);

    for (int x = 0; x < n; x++)
    {

        printf("Enter the element no.%d : \n", x+1);
            scanf("%d", &array[x]);
    }
    numOfElement = n;
    n = findUniqueElements(array, numOfElement);

    for (int x = 0; x < n; x++)
    {
        printf("%d", array[x]);
    }
    return 0;
}