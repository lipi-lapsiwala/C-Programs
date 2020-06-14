#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;

    std::vector<int> n_length;
    std::vector<int> n_arr_elem;
    std::vector<std::vector<int>> n_arr_line;

    std::vector<int> q_arr_elem;
    std::vector<std::vector<int>> q_arr_line;

    cin>>n>>q;
    //cout<<n<<" "<<q<<"\n";
    //Entering the elemets for variable length arrays
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        n_length.push_back(x);
        for(int j = 0; j<x; j++){
            int y;
            cin>>y;
            n_arr_elem.push_back(y);
        }
        n_arr_line.push_back(n_arr_elem);
        n_arr_elem.clear();
    }
    //Printing the elemets of variable length arrays
    /*for(int i = 0; i < n_length.size(); i++){
        cout<<n_length[i]<<" ";
        for(int j = 0; j < n_length[i]; j++){
            cout << n_arr_line[i][j] << " ";
        }
    cout << endl;
    }*/
    
    //Entering the elemets for variable length queries
    for (int i=0; i<q; i++){
        
        for(int j = 0; j<2; j++){
            int y;
            cin>>y;
            q_arr_elem.push_back(y);
        }
        q_arr_line.push_back(q_arr_elem);
        q_arr_elem.clear();
    }
    //Printing the elemets of variable length queries
    /*for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            cout << q_arr_line[i][j] << " ";
        }
    cout << endl;
    }*/

    //printing the actual output based on the queries
    for(int i = 0; i < q; i++){
        int arr_num = q_arr_line[i][0];
        int elem_num = q_arr_line[i][1];

        cout<<n_arr_line[arr_num][elem_num];        
        cout << endl;
    }

    return 0;
}
