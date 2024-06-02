#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10

typedef struct {
    char name[100];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Students;

void enter_grades(Students students[], int *student_count);
void calculate_average(Students *s);
void display_grades(Students students[], int student_count);

int main() {
    int password, times = 0;
    char word, respond;
    Students students[MAX_STUDENTS];
    int student_count = 0;

    puts("E1B45  E1B45  E1B45  E1B45");
    puts(" E1B45  E1B45  E1B45  E1B4");
    puts("  E1B45  E1B45  E1B45  E1B");
    puts("E  E1B45  E1B45  E1B45  E1");
    puts("E1  E1B45  E1B45  E1B45  E");
    puts("E1B  E1B45  E1B45  E1B45  ");
    puts("E1B4  E1B45  E1B45  E1B45 ");
    puts("E1B45  E1B45  E1B45  E1B45");
    puts(" E1B45  E1B45  E1B45  E1B4");
    puts("  E1B45  E1B45  E1B45  E1B");
    puts("E  E1B45  E1B45  E1B45  E1");
    puts("E1  E1B45  E1B45  E1B45  E");
    puts("E1B  E1B45  E1B45  E1B45  ");
    puts("E1B4  E1B45  E1B45  E1B45 ");
    puts("E1B4  E1B45  E1B45  E1B45 ");
    puts("E1B45  E1B45  E1B45  E1B45");
    puts(" E1B45  E1B45  E1B45  E1B4");
    puts("  E1B45  E1B45  E1B45  E1B");
    puts("E  E1B45  E1B45  E1B45  E1");
    puts("E1  E1B45  E1B45  E1B45  E");
    puts("E1B  E1B45  E1B45  E1B45  ");
    puts("E1B4  E1B45  E1B45  E1B45 ");

    getchar();
    system("cls"); 

    do {
        printf("Enter password: ");
        scanf("%d", &password);
        fflush(stdin);
        if (password != 2024) {
            times++;
            printf("Error %d times\n", times);
        }
        if (times == 3) {
            return 0;
        }
    } while (password != 2024);
    system("cls"); 

    while (1) {
        puts("+=+=+=+=+=[Grade System]+=+=+=+=+=");
        puts("|  a. Enter student grades       |");
        puts("|  b. Display student grades     |");
        puts("|  c. Search for student grades  |");
        puts("|  d. Grade ranking              |");
        puts("|  e. Exit system                |");
        puts("+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");

        scanf(" %c", &word);
        fflush(stdin);

        if (word == 'a' || word == 'A') {
            enter_grades(students, &student_count);
        }
		else if (word == 'b' || word == 'B') {
            display_grades(students, student_count);
        }
		else if (word == 'c' || word == 'C') {
        }
		else if (word == 'd' || word == 'D') {
        }
		else if (word == 'e' || word == 'E') {
            system("cls");  
            printf("Continue? (y/n)\n");
            while (1) {
                scanf(" %c", &respond);
                fflush(stdin);
                if (respond == 'y' || respond == 'Y') {
                    system("cls"); 
                    break;
                } else if (respond == 'n' || respond == 'N') {
                    system("cls");
                    return 0;
                }
            }
        } else {
            printf("Error, please enter a, b, c, d, or e\n");
            printf("Press any key to continue...");
            getchar(); 
            system("cls"); 
        }
    }
}

void enter_grades(Students students[], int *student_count) {
    int n;
    system("cls");  
    printf("Please enter number of students (5~10): ");
    scanf("%d", &n);
    fflush(stdin);

    if (n < 5 || n > 10) {
        printf("Error! Please enter again!\n");
        printf("Press any key to continue...");
        getchar();  
        return;
    }

    int i;  
    for (i = 0; i < n; i++) {
        printf("Please enter %d student information:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[*student_count].name);
        printf("Student ID number (6-digit integer): ");
        scanf("%d", &students[*student_count].id);
        printf("Math score (0~100): ");
        scanf("%d", &students[*student_count].math);
        printf("Physics score (0~100): ");
        scanf("%d", &students[*student_count].physics);
        printf("English score (0~100): ");
        scanf("%d", &students[*student_count].english);
        fflush(stdin);

        calculate_average(&students[*student_count]);
        (*student_count)++;
    }
    system("cls");
    printf("Press any key to continue...");
    getchar(); 
}

void calculate_average(Students *s) {
    s->average = (s->math + s->physics + s->english) / 3.0;
}

void display_grades(Students students[], int student_count) {
    system("cls"); 
    printf("All students grades:\n");
    printf("Name\tStudent ID\tMath\tPhysics\tEnglish\tAverage\n");

    int i;
    for (i = 0; i < student_count; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
               students[i].name,
               students[i].id,
               students[i].math,
               students[i].physics,
               students[i].english,
               students[i].average);
    }

    printf("Press any key to continue...");
    getchar();
    getchar();
    system("cls");
}
