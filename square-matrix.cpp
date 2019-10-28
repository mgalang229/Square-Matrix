#include <iostream>
using namespace std;

int main(){
    
    int r,c;
    int a[100][100],b[100][100],sum[100][100], t = 0;
    
    cout << "Enter no. of rows and columns (between 1 and 10): ";
    cin >> r >> c;
    
    cout << "Enter elements of 1st matrix: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Enter element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    
    cout << "\nEnter elements of 2nd matrix: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << "Enter element b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
    
    cout << "\nSum of the two matrix is: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
            if(j == c - 1){
                cout << endl;
            }
        }
    }
    
    if(r == c){
        cout << "\nSquare Matrix";
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i == j){
                    t += sum[i][j];
                }
            }
        }
        
    } else{
        cout << "\nNot a Square Matrix";
    }
    
    cout << "\nThe total is: " << t;
   
    return 0;
    
}
