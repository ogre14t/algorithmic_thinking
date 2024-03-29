#include <stdio.h>

int find_shortest(int lines[], int n) {
    int i;
    int shortest = 0;
    for(int i = 1; i < n; i++){
        if(lines[i] < lines[shortest])
            shortest = i;
    }
    return shortest;
}

int solve(int lines[], int n, int m){
    int i, shortest;
    for (i = 0; i < m; i++) {
        shortest = find_shortest(lines, n);
        printf("%d\n", lines[shortest]);
        lines[shortest]++; 
    }
}

// take input from user

// create a loop to identify the shortest line and add one person to it
int main(void) {
    int lines[100];
    int n,m,i;
    scanf("%d %d\n", &n, &m);
    for(i = 0; i < n; i++){
        scanf("%d", &lines[i]);
    }
    solve(lines, n, m);
    return 0;    
}