## Facade

Little code with **Facade** pattern where `Client` is a facade for entire `Backend` system.

Program tries to emulate webchat with login, but logins are stored in simple .txt file and chat is only for one user... 

### Result

* class `Service::Client` as facade
* namespace `Service::Backend`
  + class `Endpoint`
  + class `AuthDatabase`
  + namespace `Messenger`
* little `main.cpp` with demonstration of program work


### Runtime

![Screen Recording 2022-03-16 at 5 58 19 PM (1)](https://user-images.githubusercontent.com/44144647/158622593-f779ce18-1aff-4531-a7eb-ae5184f874fc.gif)


### Learned new
* Usage of **Facade** pattern
