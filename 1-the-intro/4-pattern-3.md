# Some of pattern related problems and solutions

## Code the following patterns 👇

1. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
   ```

- Code

  ```
  ll == means long long

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
        cout<<j+1<<" ";
    }
    cout<<"\n";
  }
  ```

2. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1 2 3 4
   5 6 7 8
   9 10 11 12
   13 14 15 16
   ```

- Code

  ```
  ll == means long long

  ll start = 1;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
       cout<<start<<" ";
       start++;
    }
    cout<<"\n";
  }
  ```

3. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   *
   **
   ***
   ****
   ```

- Code

  ```
  ll == means long long

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
      if(i>=j)
       cout<<"*"<<" ";
    }
    cout<<"\n";
  }
  ```

4. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1
   22
   333
   4444
   ```

- Code

  ```
  ll == means long long

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
      if(i>=j)
       cout<<i+1<<" ";
    }
    cout<<"\n";
  }
  ```

5. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1
   2 3
   4 5 6
   7 8 9 10
   ```

- Code

  ```
  ll == means long long

  ll count = 1;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<=i;j++)
    {
      cout<<count<<" ";
      count++;
    }
    cout<<"\n";
  }
  ```

6. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1
   2 3
   3 4 5
   4 5 6 7
   ```

- Code

  ```
  ll == means long long

  for(ll i=0;i<r;i++)
  {
    ll count = i+1;
    for(ll j=0;j<=i;j++)
    {
      cout<<count<<" ";
      count++;
    }
    cout<<"\n";
  }
  ```

7. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   1
   2 1
   3 2 1
   4 3 2 1
   ```

- Code

  ```
  ll == means long long



  for(ll i=0;i<r;i++)
  {
    ll count = i+1;
    for(ll j=0;j<=i;j++)
    {
      cout<<count<<" ";
      count--;
    }
    cout<<"\n";
  }
  ```

8. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   AAAA
   BBBB
   CCCC
   DDDD
   ```

- Code

  ```
  ll == means long long

  char ch='A';

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
      cout<<ch<<" ";
    }
    ch++;
    cout<<"\n";
  }
  ```

8. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   ABCD
   ABCD
   ABCD
   ABCD
   ```

- Code

  ```
  ll == means long long

  for(ll i=0;i<r;i++)
  {
    char ch='A';
    for(ll j=0;j<c;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
    cout<<"\n";
  }
  ```

8. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   ABCD
   EFGH
   IJKL
   MNOP
   ```

- Code

  ```
  ll == means long long

  char ch='A';

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<c;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
    cout<<"\n";
  }
  ```

8. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   A
   BB
   CCCC
   DDDD
   ```

- Code

  ```
  ll == means long long

  char ch='A';

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<=i;j++)
    {
      cout<<ch<<" ";
    }
    ch++;
    cout<<"\n";
  }
  ```

8. For any rows and columns print below type pattern(here number of rows == 4 and number of cols == 4)

   ```
   A
   BC
   DEF
   GHIJ
   ```

- Code

  ```
  ll == means long long

  char ch='A';

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<=i;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
    cout<<"\n";
  }
  ```

9. For any rows print below type pattern(here number of rows == 4)

   ```
   ...*
   ..**
   .***
   ****
   ```

- Code

  ```
  ll space = r-1;
  ll inc = 1;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<space;j++)
    {
        cout<<"."<<" ";
    }
    for(ll j=0;j<inc;j++)
    {
        cout<<"*"<<" ";
    }
    space--;
    inc++;
    cout<<"\n";
  }
  ```

10. For any rows print below type pattern(here number of rows == 4)

    ```
    Create a triangle shape with stars with given rows and columns.
    ```

- Code

  ```
  ll space = r-1;
  ll inc = 1;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<space;j++)
    {
        cout<<" ";
    }
    for(ll j=0;j<inc;j++)
    {
        cout<<"*"<<" ";
    }
    space--;
    inc++;
    cout<<"\n";
  }
  ```

11. For any rows print below type pattern(here number of rows == 4)

    ```
    * * * *
    * * *
    * *
    *
    ```

- Code

  ```
  ll count = 0;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<r-count;j++)
    {
        cout<<"*"<<" ";
    }
    count++;
    cout<<"\n";
  }
  ```

12. For any rows print below type pattern(here number of rows == 4)

    ```
    * * * *
      * * *
        * *
          *
    ```

- Code

  ```
  ll count = 0;
  ll space = 0;

  for(ll i=0;i<r;i++)
  {
    for(ll j=0;j<space;j++){
      cout<<" ";
    }
    for(ll j=0;j<r-count;j++)
    {
        cout<<"*";
    }
    space++;
    count++;
    cout<<"\n";
  }
  ```

13. Print pascal's triangle for given rows(here r=4)

    ```
    1
    121
    12321
    1234321
    ```

- Code

  ```
  ll count = 0;

  for(ll i=1;i<=r;i++)
  {
    ll startFirst = 1;

    while(startFirst<=i){
      cout<<startFirst<<" ";
      startFirst++;
    }

    ll startSecond = i-1;

    while(startSecond>=1){
      cout<<startSecond<<" ";
      startSecond--;
    }

    cout<<"\n";
  }
  ```
