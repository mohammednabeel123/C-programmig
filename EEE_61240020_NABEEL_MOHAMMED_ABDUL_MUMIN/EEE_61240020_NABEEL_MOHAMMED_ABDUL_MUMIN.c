#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 10000


int roll_die();
void simulate_one_die();
void simulate_two_dice();
void print_graph(int freq[], int size, int start_value);

// Sorting algorithms
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);


int main() {
    srand(time(NULL)); 

    printf("----- QUESTION 1: CENTRAL LIMIT THEOREM -----\n\n");

    simulate_one_die();
    simulate_two_dice();

    printf("\n----- QUESTION 2: SORTING ALGORITHMS -----\n\n");

    int arr[] = {9, 3, 5, 1, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    print_array(arr, n);

    // Bubble Sort
    int arr1[6] = {9, 3, 5, 1, 8, 2};
    bubble_sort(arr1, n);
    printf("Bubble Sort: ");
    print_array(arr1, n);

    // Selection Sort
    int arr2[6] = {9, 3, 5, 1, 8, 2};
    selection_sort(arr2, n);
    printf("Selection Sort: ");
    print_array(arr2, n);

    // Insertion Sort
    int arr3[6] = {9, 3, 5, 1, 8, 2};
    insertion_sort(arr3, n);
    printf("Insertion Sort: ");
    print_array(arr3, n);

    return 0;
}


int roll_die() {
    return (rand() % 6) + 1;
}


void simulate_one_die() {
    int freq[6] = {0};

    for (int i = 0; i < ROLLS; i++) {
        int r = roll_die();
        freq[r - 1]++;
    }

    printf("One Die Distribution:\n");
    print_graph(freq, 6, 1);
}


void simulate_two_dice() {
    int freq[11] = {0};

    for (int i = 0; i < ROLLS; i++) {
        int sum = roll_die() + roll_die();
        freq[sum - 2]++;
    }

    printf("\nTwo Dice Distribution (CLT Demonstration):\n");
    print_graph(freq, 11, 2);
}


void print_graph(int freq[], int size, int start_value) {
    int scale = 100; // adjust for nice display

    for (int i = 0; i < size; i++) {
        printf("%2d: ", i + start_value);

        int stars = freq[i] / scale;

        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }
}



// Bubble Sort
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Insertion Sort
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}