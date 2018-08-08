#include <bits/stdc++.h>

using namespace std;

/****** Complete the hourglassSum function below. ****/
int hourglassSum(vector<vector<int>> arr) {
    int sum = INT_MIN, temp = INT_MIN; //initialised with the minimum integer value. This is done to pass negative test cases.

    for (int i = 0 ; i< 4 ; i ++) {
        for (int j = 0 ; j< 4 ; j++) {
            temp = sum;
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]; //This is the hourglass structured subset of the array.
            sum = temp > sum ? temp : sum;
        }
    }
    return sum;
}
/***********************************/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
