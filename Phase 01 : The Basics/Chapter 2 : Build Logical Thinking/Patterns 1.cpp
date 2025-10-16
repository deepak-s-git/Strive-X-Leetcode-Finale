/*
-----------------------------------------------------------
🎯 TOPIC: Pattern Printing (Part 2)
📘 PHASE 1: Learn Basics (Patterns and Logic Building)
-----------------------------------------------------------


Each pattern helps understand:
- Loop control (nested loops)
- Row/column logic
- Space & symbol balance
-----------------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
🔹 PATTERN 1: Full Diamond
------------------------------------------------------------
   Output for n=5:
       *
      ***
     *****
    *******
   *********
   *********
    *******
     *****
      ***
       *
----------------------------------------------------------*/
int n = 5;

int main() {
    // 🔸 Upper Pyramid
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout << " ";       // leading spaces
        }
        for(int j=0; j<(2*i+1); j++){
            cout << "*";       // stars for upper pyramid
        }
        cout << endl;
    }

    // 🔸 Lower Inverted Pyramid
    for(int i=n-1; i>=0; i--){
        for(int j=n; j>i; j--){
            cout << " ";       // spaces increase downward
        }
        for(int j=0; j<(2*i+1); j++){
            cout << "*";       // stars decrease
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 2: Symmetrical Diamond (Dynamic n)
------------------------------------------------------------
For n = 7:
*
**
***
****
***
**
*
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 7;

int main(){
    for(int i=0; i<2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n-i;   // reduces star count after midpoint
        for(int j=0; j<star; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 3: Binary (0/1) Triangle
------------------------------------------------------------
Output:
1
01
101
0101
10101
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;
int main(){
    int start = 1; // controls whether to start with 0 or 1
    
    for(int i=0; i<n; i++){
        if(i % 2 == 0) start = 1; // even row → start with 1
        else start = 0;           // odd row → start with 0
        for(int j=0; j<i; j++){
            cout << start;
            start = 1 - start;    // alternate between 0 and 1
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 4: Number Pyramid (Mirrored Numbers)
------------------------------------------------------------
Output:
1        1
12      21
123    321
1234  4321
1234554321
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;
int main(){
    int space = 2*(n-1);  // spaces shrink by 2 every row
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << j;  // left ascending numbers
        }
        for(int j=0; j<space; j++){
            cout << " ";  // middle spaces
        }
        for(int j=i; j>=1; j--){
            cout << j;  // right descending numbers
        }
        cout << endl;
        space -= 2;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 5: Continuous Number Triangle
------------------------------------------------------------
Output:
1
2 3
4 5 6
7 8 9 10
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;
int num = 1;
int main(){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << num << " ";
            num++; // increment for each printed value
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 6: Alphabet Triangle (Sequential Letters)
------------------------------------------------------------
Output:
A
A B
A B C
A B C D
A B C D E
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;

int main() {
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<i; j++){
            cout << ch << " ";
            ch++; // next letter
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 7: Decreasing Alphabet Triangle
------------------------------------------------------------
Output:
A B C D E
A B C D
A B C
A B
A
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;

int main() {
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch <'A'+(n-i); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 8: Repeating Alphabet Triangle
------------------------------------------------------------
Output:
A
B B
C C C
D D D D
E E E E E
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n = 5;

int main(){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;  // changes with row
        for(int j=0; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}



/* ---------------------------------------------------------
🔹 PATTERN 9: Alphabet Pyramid (A to Z and Back)
------------------------------------------------------------
Output:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
----------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 5; i++) {
        for (j = i; j <= 5; j++) {
            cout << " "; // leading spaces
        }

        for (j = 1; j <= i; j++) {
            cout << ch;  // left part A..B..C
            ch++;
        }
        ch--; // adjust for mirror part

        for (j = i + 1; j <= 2 * i - 1; j++) {
            ch--;       // reverse back letters
            cout << ch;
        }
        ch = 'A';       // reset for next row
        cout << endl;
    }
    return 0;
}
