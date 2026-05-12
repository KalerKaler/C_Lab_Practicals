#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
    int scores[3];  // array within structure (3 test scores)
};

int main() {
    struct Employee emp[5] = {  // array of structures (5 employees)
        {101, "Alice", 50000, {85, 90, 88}},
        {102, "Bob", 55000, {78, 82, 80}},
        {103, "Charlie", 48000, {92, 89, 94}},
        {104, "Diana", 60000, {88, 85, 90}},
        {105, "Eve", 47000, {75, 80, 78}}
    };

    for(int i = 0; i < 5; i++) {
        printf("ID:%d Name:%s Salary:%.2f Scores: ", emp[i].id, emp[i].name, emp[i].salary);
        for(int j = 0; j < 3; j++)
            printf("%d ", emp[i].scores[j]);
        printf("\n");
    }
    return 0;
}