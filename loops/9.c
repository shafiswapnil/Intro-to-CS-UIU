#include <stdio.h>

int main()
{
  int student_count;
  printf("Enter student count: \n");
  scanf("%d", &student_count);

  float A, HW, CT, MT, TF, total_marks, percentage;

  if (student_count != 0)
  {
    for (int i = 1; i <= student_count; i++)
    {
      // inputs
      printf("Input marks in serial: Attendance, Assignment, Class Test, Mid Term, Term Final\n");
      scanf("%f%f%f%f%f", &A, &HW, &CT, &MT, &TF);

      // logic
      total_marks = (A + HW + CT + MT + TF);
      percentage = (total_marks / 180) * 100;

      // conditions
      if (percentage >= 90)
      {
        printf("Student %d : A\n", i);
      }
      else if (percentage >= 86 && percentage <= 89)
      {
        printf("Student %d : A-\n", i);
      }
      else if (percentage >= 82 && percentage <= 85)
      {
        printf("Student %d : B+\n", i);
      }
      else if (percentage >= 78 && percentage <= 81)
      {
        printf("Student %d : B\n", i);
      }
      else if (percentage >= 74 && percentage <= 77)
      {
        printf("Student %d : B-\n", i);
      }
      else if (percentage >= 70 && percentage <= 73)
      {
        printf("Student %d : C+\n", i);
      }
      else if (percentage >= 66 && percentage <= 69)
      {
        printf("Student %d : C\n", i);
      }
      else if (percentage >= 62 && percentage <= 65)
      {
        printf("Student %d : C-\n", i);
      }
      else if (percentage >= 58 && percentage <= 61)
      {
        printf("Student %d : D+\n", i);
      }
      else if (percentage >= 55 && percentage <= 57)
      {
        printf("Student %d : D\n", i);
      }
      else
      {
        printf("Student %d : F\n", i);
      }
    }
  }
  else
  {
    printf("Enter valid student count!\n");
  }

  return 0;
}