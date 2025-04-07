### Clang
 
- Bubble sort

    - ArrayLength 
    ```C
    countArrLen = sizeof(arr) / sizeof(arr[0]);
    ```

- Pointer Note :bulb: 
    | 表達式 |                 解釋                  | 結果   | printf format |
    | ------ |:-------------------------------------:| ------ |:-------------:|
    | a      |                a 的值                 | 5      |      %d       |
    | &a     |               a 的位址                | 0x1000 |      %p       |
    | p      |     p 儲存的位址（就是 a 的位址）     | 0x1000 |      %p       |
    | &p     |             p 自己的位址              | 0x2000 |      %p       |
    | *p     | p 所指向的位址上的值（也就是 a 的值） | 5      |        %d       |
