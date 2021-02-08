#include "header.h"

void    ReadStudent(Etudiant student)
{
    printf("First Name: ");
    scanf("%s", &student.FirstName);
    printf("Last Name: ");
    scanf("%s", &student.LastName);
    printf("Inscription Number: ");
    scanf("%d", &student.InscriptionNumber);
    printf("Student's Marks:\n");
    for(size_t i = 0; i < 3; ++i)
    {
        printf("%d Mark", i+1);
        scanf("%f", &student.Marks[i]);
    }
}

void    ReadGroup(Groupe Gp, int StudentNumber)
{
    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return ;
    }
    for ( size_t i = 0; i < (size_t)StudentNumber; ++i)
        ReadStudent(Gp.Students[i]);
}

void    DisplayStudent(Etudiant student)
{
    printf("First Name: %s\n", student.FirstName);
    printf("Last Name: %s\n", student.LastName);
    printf("Inscription Number: %d\n", student.InscriptionNumber);
    printf("Student's Marks:\n First Mark: %f \n Seconde Mark: %f \n Third Mark: %f\n",
    student.Marks[0], student.Marks[1], student.Marks[2]);
}

void    DisplayGroup(Groupe Gp, int StudentNumber)
{
    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return ;
    }
    if (!Gp.Students[0].FirstName)
    {
        printf("The groupe is empty\n");
        return ;
    }
    for(size_t i = 0; i < (size_t)StudentNumber; ++i)
    {
        if (!Gp.Students[i].FirstName)
        {
            printf("We can't display more students\n");
            return ;
        }
        DisplayStudent(Gp.Students[i]);
    }
}

short   IsSorted(Groupe Gp, int StudentNumber)
{
    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return -1;
    }
    for(size_t i = 0; i < (size_t)StudentNumber - 1; ++i)
    {
        for (size_t j = i + 1; j < (size_t)StudentNumber; ++j)
        {
            if (Gp.Students[i].InscriptionNumber > Gp.Students[j].InscriptionNumber)
                return -1;
        }
    }
    return 0;
}

void    SortGroup(Groupe Gp, int StudentNumber)
{
    int index, min;
    Etudiant tmp;

    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return ; 
    }
    for (size_t i = 0; i < (size_t)StudentNumber; ++i)
    {
        min = Gp.Students[i].InscriptionNumber;
        for (size_t j = i; j < (size_t)StudentNumber; ++j)
        {
            if (Gp.Students[j].InscriptionNumber < min)
            {
                min = Gp.Students[j].InscriptionNumber;
                index = j;
            }
        }
        tmp = Gp.Students[index];
        Gp.Students[index] = Gp.Students[i];
        Gp.Students[i] = tmp;
    }
}

int     SearchStudent(Groupe Gp, int StudentNumber, int InsNumber)
{
    int start = 0, end = StudentNumber - 1, mid = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (Gp.Students[mid].InscriptionNumber == InsNumber)
            return mid;
        else if (InsNumber > Gp.Students[mid].InscriptionNumber)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void     UpdateStudent(Groupe Gp, int StudentNumber, char *FirstName, char *LastName)
{
    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return ; 
    }
    for(size_t i = 0; i < (size_t)StudentNumber; ++i)
    {
        if (!strcmp(Gp.Students[i].FirstName, FirstName) && !strcmp(Gp.Students[i].LastName,
        LastName))
        {
            printf("Update the inscription number: ");
            scanf("%d", &Gp.Students[i].InscriptionNumber);
            printf("Update Marks: \n");
            for(size_t j = 0; j < 3; ++j)
            {
                printf("%d Mark: ", j + 1);
                scanf("%d", &Gp.Students[i].Marks[j]);
            }
        }
    }
}

size_t     SuperStudent(Groupe Gp, int StudentNumber)
{
    if (StudentNumber > 100 || StudentNumber < 0)
    {
        printf("The number of students should be between 0 and 100\n");
        return ; 
    }
    float average = 0.0, max = 0.0;
    int ans = 0;
    for(size_t i = 0; i < StudentNumber; ++i)
    {
        average = Gp.Students[i].Marks[0] + Gp.Students[i].Marks[1] + Gp.Students[i].Marks[2];
        average /= 3.0;
        if (average >= max)
        {
            max = average;
            ans = i;
        }
    }
    return ans;
}