#include "std_lib_facilities.h"
/* Drill 1
int main()

try {
    cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 2
int main()

try {
    cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 3
int main()

try {
    cout << "Success" << "!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 4
int main()

try {
    cout << "Success!" << '\n';
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 5
int main()

try {
    int res = 7;
    vector<int> v(10);
    v[5] = res;
    cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 6
int main()

try {
    vector<int> v(10);
    v[5] = 7;
    if(v[5] == 7) {cout << "Success!\n";}
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 7
int main()

try {
    bool cond = true;
    if(cond) cout << "Success!\n";
    else cout << "Fail!\n";

    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 8
int main()

try {
    bool c = false;
    if(!c) cout << "Success!\n";
    else cout <<"Fail\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 9
int main()

try {
    string s= "ape";
    bool c = "fool" > s;
    if(c) cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 10
int main()

try {
    string s = "ape";
    if(s != "fool!") cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 11
int main()

try {
    string s = "ape";
    if (s != "fool") cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 12
int main()

try {
    string s = "ape";
    if(s != "fool") cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 13
int main()

try {
    vector<char> v(5);
    for(int i= 0; i < v.size(); ++i)
    {
        cout << "Success!\n";
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 14
int main()

try {
    vector<char> v(5);
    for(int i = 0; i < v.size(); ++i)
    {
        cout << "Success!\n";
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 15
int main()

try {
    string s="Success!\n";
    for(int i = 0; i < s.length(); ++i)
    {
        cout << s[i];
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 16
int main()

try {
    if(true)
    {
        cout << "Success!\n";
    }
    else
    {
        cout << "Fail!\n";
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 17
int main()

try {
    int x = 127;
    char c = x;
    if(c==127) cout <<"Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 18
int main()

try {
    string s = "Success!\n";
    for(int i = 0; i < s.length(); ++i)
    {
        cout << s[i];
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 19
int main()

try {
    vector<int> v(5);
    for(int i = 0; i <= v.size(); ++i)
    {
        cout << "Success!\n";
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 20
int main()

try {
    int i = 0;
    int j = 9;
    while(i < 10)
    {
        ++i;
        if(j < i) cout << "Success!\n";
    }
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 21
int main()

try {
    int x = 7;
    double d = 5/(x-2);
    if (d) cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 22
int main()

try {
    string s = "Success!\n";
    for(int i = 0; i < s.length(); ++i) cout << s[i];
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 23
int main()

try {
    int i = 0;
    int j = 9;
    while (i < 10)
    {
        ++i;
        if(j < i) cout << "Success!\n";
    }
    
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
/* Drill 24
int main()

try {
    int x = 4;
    double d = 5/(x-3);
    if(d) cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
*/
// Drill 25
int main()

try {
    cout << "Success!\n";
    keep_window_open();
    return 0;
}

catch(exception &e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch(...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}