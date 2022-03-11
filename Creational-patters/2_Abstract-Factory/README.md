## Abstract factory method

Simple code with **Abstract factory method** applied to example `Application` for various OS: `Unix` and `Windows` (with factories for each of it)



### Result

+ `Widgets` namespace with next hierarchy:
  * class `Widgets::IBase`
  * namespace `Widgets::Unix`:
    + `Window : IBase`
    + `Button : IBase`
    + `TextField : IBase`
  * namespace `Widgets::Windows`:
    + `Window : IBase`
    + `Button : IBase`
    + `TextField : IBase`
+ `Factories` namespace with next hierarchi:
   * class `Factories::IFactory`
   * class `Factories::Unix : IFactory`
   * class `Factories::Windows : IFactory`
* `Application` class with:
  * constructor with `Factories::IFactory` argument
  * simple `exec` method to "draw" application with specified widgets



### Runtime

![2022-03-11 15-14-32 (1)](https://user-images.githubusercontent.com/44144647/157866629-5181d754-02c1-45c8-aa71-8e0083b49067.gif)



### Learned new
* Usage of **Abstract factory** pattern
