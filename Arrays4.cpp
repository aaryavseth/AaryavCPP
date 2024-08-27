#include <iostream>
using namespace std;

void readarr(int arr[10][10], int r, int c) {
    cout << "Enter Elements of Array: \n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> arr[i][j];
}

void printarr(int arr[10][10], int r, int c) {
    cout << "The Entered Array Is\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            cout << arr[i][j] << "  ";
        cout << "\n";
    }
}

void sumTwoArrays(int arr1[10][10], int arr2[10][10], int sum[10][10], int r, int c) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = arr1[i][j] + arr2[i][j];
}

void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Read and display 1D array. Also sum of elements of the given array\n";
    cout << "2. Read & display 2D array. Calculate & display sum of elements\n";
    cout << "3. Read & display two 2D arrays. Calculate the sum of the given two 2D arrays\n";
    cout << "4. Exit\n";
}

void handle1DArray() {
    int n;
    cout << "Enter the number of elements in the 1D array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "\nSum of elements: " << sum << endl;
}

void handle2DArray() {
    const int size = 10;
    int arr[size][size];
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    readarr(arr, r, c);
    printarr(arr, r, c);

    int sum = 0;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum += arr[i][j];

    cout << "Sum of elements: " << sum << endl;
}

void handleTwo2DArrays() {
    const int size = 10;
    int a[size][size], b[size][size], sum[size][size];
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    readarr(a, r, c);
    readarr(b, r, c);

    cout << "First Array:\n";
    printarr(a, r, c);

    cout << "Second Array:\n";
    printarr(b, r, c);

    sumTwoArrays(a, b, sum, r, c);

    cout << "The sum of the given two arrays is:\n";
    printarr(sum, r, c);
}

int main() {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                handle1DArray();
                break;
            case 2:
                handle2DArray();
                break;
            case 3:
                handleTwo2DArrays();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
