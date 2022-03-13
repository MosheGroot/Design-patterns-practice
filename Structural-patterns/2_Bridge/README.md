## Bridge

Simple code with **Bridge** pattern between various versions of `Remote` (basic, advanced) and `Devices` implementations (TV, radio).


### Result

* namespace `Devices` with:
  * class `IDevice`
  * class `TV : IDevice`
  * class `Radio : IDevice`
* namespace `Remotes`
  * class `BasicRemote`
  * class `AdvancedRemote : BasicRemote` (with 2 new functions: `mute` and `turnOnMaxVolume`) 
* simple `main.cpp` with basic tests

### Runtime

![2022-03-13 13-05-47](https://user-images.githubusercontent.com/44144647/158054745-dae23bdd-22a5-4d6d-bec5-69b3e5536af1.gif)


### Learned new
* Usage of **Bridge** pattern
