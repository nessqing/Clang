MEMO 📝
 
- Bubble sort

- ArrayLength 
    ```C
    ArrayLength = sizeof(Array) / sizeof(Array[0]);
    ```

- Pointer Note :bulb: 
    | 表達式 |                 解釋                  | 結果   | printf format |
    | ------ |:-------------------------------------:| ------ |:-------------:|
    | num      |                num 的值                 | 5      |      %d       |
    | &num     |               num 的位址                | 0x1000 |      %p       |
    | pNum      |     pNum 儲存的位址（就是 num 的位址）     | 0x1000 |      %p       |
    | &pNum     |             pNum 自己的位址              | 0x2000 |      %p       |
    | *pNum     | pNum 所指向的位址上的值（也就是 num 的值） | 5      |        %d       |

- Setting : Visual studio code 
    - task.json
    ```
    {
      "tasks": [
        {
          "type": "cppbuild",
          "label": "C/C++: clang++ build active file",
          "command": "/usr/bin/clang++",
          "args": [
            "-fcolor-diagnostics",
            "-fansi-escape-codes",
            "-g",
            "${file}",
            "-o",
            "${fileDirname}/${fileBasenameNoExtension}"
          ],
          "options": {
            "cwd": "${fileDirname}"
          },
          "problemMatcher": ["$gcc"],
          "group": {
            "kind": "build",
            "isDefault": true
          },
          "detail": "Task generated by Debugger."
        }
      ],
      "version": "2.0.0"
    }
    ```
