## Factory method

Simple code with **Factory method** applied to `Workers`

Unlike in "ConcreteProduct <-> ConcreteCreator" scheme, 
here [`Workers::Base::applyWorker()`](./src/workers/base.cpp) is a static **Factory method** 
of base workers class.


### Result

+ `Workers` namespace with next hierarchy:
  * class `Workers::Base`:
    + `Builder`
    + `Doctor`
    + `Driver`
    + `Firefighter`
+ All `Workers` has `work` method with simple `sleep` at `worktime` seconds
+ `Managment` namespace with:
  * reading of simple config
  * parallel execution of `Workers`
+ Simple console logs with timestamps



### Runtime

![2022-03-11 01-49-51 (3)](https://user-images.githubusercontent.com/44144647/157776543-86ebe575-c44a-43c9-a264-7c21adf146fb.gif)



### Learned new
* Another one type of **Factory method** usage
* `clang` doesn't support `execution policies` at march of 2022
* `gcc` supports `execution policies`, but doesn't have its own version of parallelized algorithms, 
  so its requires linked `Intel TBB` library for correct `std::par` work
