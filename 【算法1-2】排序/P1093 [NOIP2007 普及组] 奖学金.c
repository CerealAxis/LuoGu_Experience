#include <stdio.h>

typedef struct {
    int id;
    int chinese;
    int math;
    int english;
    int total;
} Student;

void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total < students[j + 1].total ||
                (students[j].total == students[j + 1].total &&
                 students[j].chinese < students[j + 1].chinese) ||
                (students[j].total == students[j + 1].total &&
                 students[j].chinese == students[j + 1].chinese &&
                 students[j].id > students[j + 1].id)) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        scanf("%d %d %d", &students[i].chinese, &students[i].math, &students[i].english);
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }

    sortStudents(students, n);

    for (int i = 0; i < 5; i++) {
        printf("%d %d\n", students[i].id, students[i].total);
    }

    return 0;
}
