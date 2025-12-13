#include <stdio.h>
#define MAX 10
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int n;
void enqueue(int v) {
    queue[++rear] = v;
}
int dequeue() {
    return queue[++front];
}
void BFS(int start) {
    printf("%d ", start);
    visited[start] = 1;
    enqueue(start);
    while (front != rear) {
        int v = dequeue();
        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}
int main() {
    int start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("BFS traversal: ");
    BFS(start);
    return 0;
}
