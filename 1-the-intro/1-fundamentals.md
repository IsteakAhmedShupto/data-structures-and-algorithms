# Framework of solving a problem ⚡

- Understanding the given problem 🤔
- Checking constraints and test cases(inputs and outputs) 🔬
- Finding a suitable approach to solve the problem 🧠
- Coding the solution ✅

# Basics of c++

1.  "Hello, world" code👇

    ```cpp
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
    cout<<"Hello, world";
    }

    ```

2.  Variables👇

    ```cpp
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
    int x = 5;
    int y = 5;
    cout<<x+y;
    }
    ```

3.  Data types👇

    ```cpp
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
    // int, long int, long long, float, double, long double
    // char, string
    char ch='S';
    cout<<ch;
    }
    ```

4.  Data types👇

    ```cpp
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
    // int, long int, long long, float, double, long double
    // char, string
    // bool
    char ch='S';
    cout<<ch;
    cout<<endl; // means newline
    cout<<"\n"; //means newline also
    bool boolean = true;
    cout<<boolean;
    }
    ```

5.  Operators👇

    ```cpp
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
    // +, -, /, %
    // ++ is incremental operator
    // -- is decremental operator
    // here % prints remainder
    ll a,b;
    cin>>a>>b;
    cout<<a+b; // is gonna print sum of a and b
    }
    ```

6.  Calculation order👇

- Calculation always happens in higher data type.
- Suppose 7/2 will return 3 but 7/2.0 will return 3.5 which is a double value. Here int/double returned double value.
- The order can be said something like this 👉 char < int < long int < long long int < float < double

7.  Operator predecence👇

- Operator precedence specifies the order of operations in expressions that contain more than one operator.

- [Click here](https://en.cppreference.com/w/cpp/language/operator_precedence) to check the operator predecence for c++.
