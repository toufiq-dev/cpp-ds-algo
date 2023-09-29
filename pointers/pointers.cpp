#include <bits/stdc++.h>
using namespace std;

// int main() {
//     float f = 10.5;
//     float p = 2.5;
//     float* ptr = &f;
//     (*ptr)++;   // dereferencing
//     *ptr = p;

//     cout << *ptr << " " << f << " " << p;
//     // output: 2.5 2.5 2.5

//     return 0;
// }

// int main() {
//     int a = 7;
//     int b = 17;
//     int* c = &b;
//     *c = 7;

//     cout << a << " " << b << endl;
//     // output: 7 7

//     return 0;
// }

// int main() {
//     int* ptr = 0; // null pointer
//     int a = 10;
//     *ptr = a;   // deferencing null pointer might cause error

//     cout << *ptr << endl;
//     // output: error

//     return 0;
// }

// int main() {
//     char ch = 'a';
//     char* ptr = &ch;
//     ch++;

//     cout << *ptr << endl;
//     // output: b

//     return 0;
// }

// int main() {
//     int a = 7;
//     int* c = &a;
//     c = c + 1;

//     cout << a << "  " << *c << endl;
//     // output: 7 garbage

//     return 0;
// }

// int main() {
//     int var = 10;
//     int* ptr = &var;
//     *ptr = 20;

//     int** pr = &ptr;
//     **pr = 30; 

//     cout << var << endl;
       // OUTPUT: 30

//     return 0;
// }

// int main() {
//     int a = 7;
//     int* c = &a;
//     c = c + 3;

//     cout << &a << "  " << c << endl;

//     return 0;
// }

// int main() {
//        char arr[20];
//        int i;

//        for(i = 0; i < 10; i++) {
//               *(arr + i) = 65 + i;
//        }

//        *(arr + i) = '\0';

//        cout << arr;

//        return 0;
// }

// int main() {
//        char *ptr;
//        char str[] = "abcdefg";

//        ptr = str;
//        ptr += 5;
//        cout << ptr;
       
//        return 0;
// }

// int main() {
//        int numbers[5];
//        int *p;
//        p = numbers;
//        *p = 10;
//        p = &numbers[2];
//        *p = 20;
//        p--;
//        *p = 30;
//        p = numbers + 3;
//        *p = 40;
//        p = numbers;
//        *(p + 4) = 50;

//        for(int n = 0; n < 5; n++) {
//               cout << numbers[n] << ", ";
//        }

//        return 0;
// }

// int main() {
//        char st[] = "ABCD";

//        for(int i = 0; st[i] != '\0'; i++) {
//               cout << st[i] << " " << *(st) + i << " " << *(i + st) << " " << i[st] << endl;
//        }

//        return 0;
// }

// int main() {
//        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//        float *ptr1 = &arr[0];
//        float *ptr2 = ptr1 + 3;

//        cout << *ptr2 << " ";
//        cout << ptr2 - ptr1;

//        return 0;
// }

// void changeSign (int *p) {
//        *p = (*p) * -1;
// }

// int main() {
//        int a = 10;
//        changeSign(&a);

//        cout << a << endl;
// }

// void fun(int a[]) {
//        cout << a[0] << endl;
// }

// int main() {
//        int a[] = {1, 2, 3, 4};
//        fun(a + 1);

//        cout << a[0];
// }

// void square(int *p) {
//        int a = 10;
//        p = &a;
//        *p = (*p) * (*p);
// }

// int main() {
//        int a = 10;
//        square(&a);

//        cout << a << endl;
// }

// void Q(int z) {
//        z += z;
//        cout << z << " ";
// }

// void P(int *y) {
//        int x = *y + 2;
//        Q(x);
//        *y = x - 1;

//        cout << x << " ";
// }

// int main() {
//        int x = 5;
//        P(&x);

//        cout << x << " ";

//        return 0;
// }

// int main() {
//        int a = 10;
//        int *p = &a;
//        int **q = &p;
//        int b = 20;
//        *q = &b;
//        (*p)++;

//        cout << a << " " << b << endl;
// }

// int f(int x, int *py, int **ppz) {
//        int y, z;
//        **ppz += 1;
//        z = **ppz;
//        *py += 2;
//        y = *py;
//        x += 3;

//        return x + y + z;
// }

// int main() {
//        int c, *b, **a;
//        c = 4; 
//        b = &c;
//        a = &b;

//        cout << f(c, b, a);

//        return 0;
// }

// int main() {
//        int ***r, **q, *p, i = 8;
//        p = &i;
//        (*p)++; // 9
//        q = &p; // 
//        (**q)++; // 10
//        r = &q; // 10

//        cout << *p << " " << **q << " " << ***r;

//        return 0;
// }

void increment(int **p) {
       (**p)++;
}

int main() {
       int num = 10;
       int *ptr = &num;
       
       increment(&ptr);

       cout << num << endl;

       return 0;
}