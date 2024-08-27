#include <iostream>
using namespace std;

void read2DArray(int arr[10][10], int r, int c) {
    cout << "Enter Elements of Array: \n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
}

void display2DArray(const int arr[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << "  ";
        cout << "\n";
    }
}

int sum2DArray(const int arr[10][10], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum += arr[i][j];
    return sum;
}

void sumTwo2DArrays(const int arr1[10][10], const int arr2[10][10], int sum[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
}

void sum2DRows(const int arr[][10], int r, int c){
    for(int i = 0; i < r; i++){
        int RowSum = 0;
        for(int j = 0; j < c; j++){
            RowSum += arr[i][j];
        }
        cout<<"Sum of Elements in the Row "<<i<<": "<<RowSum<<endl;
    }
}

void sum2DColumns(const int arr[][10], int r, int c){
    for(int i = 0; i < c; i++){
        int ColSum = 0;
        for(int j = 0; j < r; j++){
            ColSum += arr[j][i];
        }
        cout<<"The Sum of the Elements in the Column "<<i<<": "<<ColSum<<endl;
    }
}

void multiplyTwo2DArrays(const int arr1[10][10], const int arr2[10][10], int result[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() {
    char ch = 'y';
    int cho;
    int r, c;
    do {
        cout << "\n\n1. Reading and displaying 1D array. Also sum of elements of the given array";
        cout << "\n2. Read & Display 2D array. Calculate & display sum of elements.";
        cout << "\n3. Read & display two 2D arrays. Calculate the sum of the given two 2D arrays";
        cout << "\n4. Read & Display 2D array. Calculate & Display the Sum of Rows";
        cout << "\n5. Read & Display 2D array. Calculate & Display the Sum of Columns";
        cout << "\n6. Read & display two 2D arrays. Display the matrix after multiplication if possible";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> cho;

        switch (cho) {
            case 1: {
                int size = 10;
                int arr[size];
                cout << "Enter the Size of the Array: ";
                cin >> size;
                cout << "Enter Elements: \n";
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                }

                cout << "The Array Is: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                cout << "Sum of Elements: " << sum << endl;
                break;
            }
            case 2: {
                cout << "Enter number of rows: ";
                cin >> r;
                cout << "Enter number of columns: ";
                cin >> c;
                int arr[10][10];
                read2DArray(arr, r, c);
                display2DArray(arr, r, c);
                int sum = sum2DArray(arr, r, c);
                cout << "Sum of elements: " << sum << endl;
                break;
            }
            case 3: {
                cout << "Enter number of rows: ";
                cin >> r;
                cout << "Enter number of columns: ";
                cin >> c;
                int arr1[10][10], arr2[10][10], sum[10][10];
                cout << "First Array:\n";
                read2DArray(arr1, r, c);
                cout << "Second Array:\n";
                read2DArray(arr2, r, c);
                cout << "The First Array Entered Is: \n";
                display2DArray(arr1, r, c);
                cout << "The Second Array Entered Is: \n";
                display2DArray(arr2, r, c);
                sumTwo2DArrays(arr1, arr2, sum, r, c);
                cout << "The sum of the given two arrays is:\n";
                display2DArray(sum, r, c);
                break;
            }
            case 4: {
                cout << "Enter the Amount of Rows: ";
                cin >> r;
                cout << "Enter the Amount of Columns: ";
                cin >> c;
                int arr1[10][10];
                read2DArray(arr1, r, c);
                cout << "The Entered Array Is: \n";
                display2DArray(arr1, r, c);
                sum2DRows(arr1, r, c);
                break;
            }
            case 5: {
                cout << "Enter the Amount of Rows: ";
                cin >> r;
                cout << "Enter the Amount of Columns: ";
                cin >> c;
                int arr2[10][10];
                read2DArray(arr2, r, c);
                cout << "The Entered Array Is: \n";
                display2DArray(arr2, r, c);
                sum2DColumns(arr2, r, c);
                break;
            }
            case 6: {
                int r1, c1, r2, c2;
                cout << "Enter number of rows for the first matrix: ";
                cin >> r1;
                cout << "Enter number of columns for the first matrix: ";
                cin >> c1;
                cout << "Enter number of rows for the second matrix: ";
                cin >> r2;
                cout << "Enter number of columns for the second matrix: ";
                cin >> c2;

                if (c1 != r2) {
                    cout << "Matrix multiplication not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
                    break;
                }

                int arr1[10][10], arr2[10][10], result[10][10];
                cout << "First Matrix:\n";
                read2DArray(arr1, r1, c1);
                cout << "Second Matrix:\n";
                read2DArray(arr2, r2, c2);

                multiplyTwo2DArrays(arr1, arr2, result, r1, c1, c2);

                cout << "The result of matrix multiplication is:\n";
                display2DArray(result, r1, c2);
                break;
            }
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        if (cho != 7) {
            cout << "Do you wish to continue (y/n): ";
            cin >> ch;
        }

    } while (ch == 'y' && cho != 7);

    return 0;
}
