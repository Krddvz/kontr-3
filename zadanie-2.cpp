#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("C:\\Users\\AURORA\\OneDrive\\ccc\\tip_kr-2\\input.txt");
    ofstream fout("C:\\Users\\AURORA\\OneDrive\\ccc\\tip_kr-2\\output.txt");
    int n, m;
    fin >> n >> m;

    if (n <= 0 || m <= 0) {
        cout << "Неверный размер матрицы";
        return 1;
    }

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> a[i][j];
        }
    }

    fout << m << " " << n << endl;

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            fout << a[i][j] << " ";
        }
        fout << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
