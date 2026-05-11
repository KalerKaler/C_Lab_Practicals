#include <stdio.h>
#define MAX 100

int arr[MAX], n = 0;

void insert(int pos, int val) {
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
}
void update(int pos, int val) { arr[pos] = val; }
void delete(int pos) {
    for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}
void display() {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
int search(int val) {
    for (int i = 0; i < n; i++) if (arr[i] == val) return i;
    return -1;
}
int main() {
    insert(0, 10); insert(1, 20); insert(1, 15);
    display();                // 10 15 20
    update(2, 25); display(); // 10 15 25
    delete(0); display();     // 15 25
    printf("Search 25 at index: %d\n", search(25));
    return 0;
}