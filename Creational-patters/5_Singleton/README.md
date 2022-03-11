## Singleton

Simple code with **Singleton** pattern applied to thread-safety `Logger` class.

Example program is just logging all of `argv` params to all of `log-level` methods.


### Result

+ class `Utils::Logger` with next methods:
  + `error()`
  + `info()`
  + `log()`
  + `debug()`
+ thread-safety `getInstance` and log functions with mutexes


### Runtime

![2022-03-11 23-26-35](https://user-images.githubusercontent.com/44144647/157958195-25ffdaa9-1ff6-46f0-b148-5f0cfdcaa0c9.gif)


### Learned new
* Usage of **Singleton** pattern
