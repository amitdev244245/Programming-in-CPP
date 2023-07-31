#include <iostream>
using namespace std;

/*----------------------------------------------------------------------------------
#0. Basic Code Syntax of C++.
----------------------------------------------------------------------------------*/
// #include <iostream>
// using namespace std;
// int main(){
//     //code here
//     return 0;
// }

/*----------------------------------------------------------------------------------
#1. Write a program that takes an input of age and prints if you are adult or not.
----------------------------------------------------------------------------------*/

// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "Adult";
//     }
//     else
//     {
//         cout << "Not Adult";
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#2. Write a program that takes marks as input and prints the corresponding grades.
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
----------------------------------------------------------------------------------*/

// int main()
// {
//     int marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F";
//     }
//     else if (marks <= 44)
//     {
//         cout << "E";
//     }
//     else if (marks <= 49)
//     {
//         cout << "D";
//     }
//     else if (marks <= 59)
//     {
//         cout << "C";
//     }
//     else if (marks <= 79)
//     {
//         cout << "B";
//     }
//     else if (marks <= 100)
//     {
//         cout << "A";
//     }
//     else
//     {
//         cout << "Wrong marks entered!";
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#3. Write a program that takes an input of age and prints their eligibility for job.
a. If age < 18,
   print-> not eligible for job
b. If age >= 18 and age<=54,
   print-> eligible for job
c. If age >= 55 and age<=57,
   print-> eligible for job, but retirement soon
d. If age > 57,
   print-> retirement time
----------------------------------------------------------------------------------*/

// int main()
// {
//     int age;
//     cin >> age;
//     if (age < 18)
//     {
//         cout << "Sorry, You are not eligible for job!" << endl;
//     }
//     else if (age >= 18 && age <= 57)
//     {
//         cout << "Congrats, You are eligible for job!";
//         if (age >= 55)
//         {
//             cout << ", but retirement soon!" << endl;
//         }
//     }
//     else
//     {
//         cout << "Retirement Time!" << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#4. Write a program that takes the day number and prints the corresponding day.
for 1: print Monday,
for 2: print Tuesday,
and so on...
for 7: print Sunday
----------------------------------------------------------------------------------*/

// int main()
// {
//     int dayCount;
//     cin >> dayCount;
//     switch (dayCount)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid day number!";
//     }
// }

/*----------------------------------------------------------------------------------
#5. Write a program that takes multiple inputs that should be stored in an array.
----------------------------------------------------------------------------------*/

// int main()
// {
//     int arr[5];

//     // method 1:
//     // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     // cout << arr[4];

//     // method 2 - using for loop:
//     // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//     // {
//     //     cin >> arr[i];
//     //     cout << "arr[" << i << "] is: " << arr[i] << endl;
//     // }

//     // method 3 - using for-each loop:
//     // for (int i : arr)
//     // {
//     //     cin >> i;
//     //     cout << i << endl;
//     // }
//     // return 0;
// }

/*----------------------------------------------------------------------------------
#6. Pattern Programs
#6.1 Write a program on Rectangular Star Pattern

Example 1:
Input: N = 3
Output:
* * *
* * *
* * *

Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.2 Write a program on Right-Angled Triangle Pattern

Input Format: N = 3
Result:
*
* *
* * *

Input Format: N = 6
Result:
*
* *
* * *
* * * *
* * * * *
* * * * * *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.3 Write a program on Right-Angled Number Pyramid
Input Format: N = 3
Result:
1
1 2
1 2 3
Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.4 Write a program on Right-Angled Number Pyramid – II

Input Format: N = 3
Result:
1
2 2
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.5 Write a program on Inverted Right Pyramid

Input Format: N = 3
Result:
* * *
* *
*

Input Format: N = 6
Result:
* * * * * *
* * * * *
* * * *
* * *
* *
*
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.6 Write a program on Inverted Numbered Right Pyramid

Input Format: N = 3
Result:
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.7 Write a program on Star Pyramid

Input Format: N = 3
Result:
  *
 ***
*****
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j < 2 * i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.8 Write a program on Inverted Star Pyramid

Input Format: N = 3
Result:
*****
 ***
  *
Input Format: N = 6
Result:
***********
 *********
  *******
   *****
    ***
     *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
//     {
//       cout << "*";
//     }
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.9 Write a program on Diamond Star Pattern

Input Format: N = 3
Result:
  *
 ***
*****
*****
 ***
  *
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n - i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1; j < 2 * i; j++)
//     {
//       cout << "*";
//     }
//     for (int j = 1; j <= n - i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
//     {
//       cout << "*";
//     }
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.10 Write a program on Half Diamond Star Pattern

Input Format: N = 3
Result:
  *
  **
  ***
  **
  *
Input Format: N = 6
Result:
     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *
----------------------------------------------------------------------------------*/

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int i = 1; i < n*2; i++){
//     int stars = i;
//     if(i>n) stars=n*2-i;
//     for(int j=1; j<=stars; j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.11 Write a program on Binary Number Triangle Pattern

Input Format: N = 3
Result:
1
01
101

Input Format: N = 6
Result:
1
01
101
0101
10101
010101
----------------------------------------------------------------------------------*/

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int start=-1;
//   for(int i=0; i<n; i++){
//     if(i%2==0)  start=1;
//     else start=0;
//     for(int j=0; j<=i; j++){
//       cout<<start;
//       start=1-start;
//     }
//     cout<<endl;
//   }
//   return 0;
// }