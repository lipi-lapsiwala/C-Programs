/*
-------------------Problem Statement-------------------------
1. You are given two numbers at the start. 
2. The first tells you how many rows of data there will be, and the second tells you how many pieces of data you are going to be pulling from it.
3. The next rows are the variable-length arrays (data). 
4. Each row starts with a number that tells you how long that row is. Then, the numbers following that are the actual data.
5. The rows after that are sort of like the coordinates for the data you are supposed to output. 
6. The first number tells you what row it is in, and the second tells you what column it is in.

Example:
2 1
5 3 4 2 5 1
7 9 6 8 4 6 7 0
1 2
--------------------Explanation----------------------------
The "2 1" tells us we have two rows of data and one question about it. 
The next two rows are that data. We have 5 important numbers in the first row and 7 in the next, with one number at the start telling us so:

5 3 4 2 5 1 (The 5 pieces of data are "3 4 2 5 1")
7 9 6 8 4 6 7 0 (The 7 pieces of data are "9 6 8 4 6 7 0")

Since we start everything with zero in programming, you could say that the 3 in that data is the 0th number in the 0th row. 5 is the 3rd number in the 0th row. 8 is the 2nd number in the 1st row.

The last line, "1 2", is the question. It is asking you to print out the second number in the first row. (Don't forget that we start counting at zero!) In this case, that is 8. If you printed out an 8 in response to this example problem, you would be correct.
*/
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
