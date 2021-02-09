#include "header.h"

int main(void)
{
    Groupe  inst;
    int     n;
    char    ch[10];
    int     InsNumber;
    int     index;
    char    FirstName[100], LastName[100];
    int     res;

    printf("Enter the number of the students (max 100): ");
    scanf("%d", &n);
    ReadGroup(&inst, n);
    while (1)
    {
        printf("Choose one operation:\n");
        printf("D: Display the students of the groupe\n");
        printf("SE: Search for a student\n");
        printf("U: Update the student information\n");
        printf("SO: Sort the groupe\n");
        printf("DS: Display the super student\n");
        printf("Q: exit the programme\n >> ");
        scanf("%s", ch);
        if (!strcmp(ch, "D"))
            DisplayGroup(&inst, n);
        else if (!strcmp(ch, "SE"))
        {
            printf("Enter the inscription number of the student: ");
            scanf("%d", &InsNumber);
            if ((res = IsSorted(inst, n)) == -1)
                SortGroup(&inst, n);
            if (res != 2 && (index = SearchStudent(inst, n, InsNumber)) == -1)
            {
                printf("--------------------------------------------\n");
                printf("The Student not found\n");
                printf("--------------------------------------------\n");
            }
            else if (index != -2 && res != 2)
            {
                printf("--------------------------------------------\n");
                printf("The student found at the index %d\n", index);
                printf("--------------------------------------------\n");
            }
        }
        else if (!strcmp(ch, "U"))
        {
            printf("Enter the first and the last Name: \n");
            printf("First Name: ");
            scanf("%s", FirstName);
            printf("Last Name: ");
            scanf("%s", LastName);
            UpdateStudent(&inst, n, FirstName, LastName);
        }
        else if (!strcmp(ch, "SO"))
            SortGroup(&inst, n);
        else if (!strcmp(ch, "DS") && SuperStudent(inst,n) != -1)
        {
            printf("--------------------------------------------\n");
            printf("The super student is %s %s \n", inst.Students[SuperStudent(inst, n)].FirstName,
            inst.Students[SuperStudent(inst, n)].LastName);
            printf("--------------------------------------------\n");
        }
        else if (!strcmp(ch, "Q"))
        {
            printf("-------------------------------------------\n");
            printf("Hope you enjoyed my programme\n");
            printf("-------------------------------------------\n");
            exit(0);
        }
    }
    return 0;
}