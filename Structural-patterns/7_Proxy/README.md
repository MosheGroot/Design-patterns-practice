## Proxy

Little code with **Proxy** pattern where `ProxyImage` is a proxy for low-level `RawImage` image
(let us assume that it has some complex logic and is stored on the disk).

`RawImage` creates only at first access to `ProxyImage`, so it doesn't exist when it's not used.

Also, `ProxyImage` has a high-level `getPrettyImage` method for getting a pretty-printable image in `std::string` container.

### Result

* namespace `Images`:
  + class `RawImage`
  + class `ProxyImages` -> `BasicModel` (contains pointer to raw image)
* simple `main.cpp`

### Runtime

![Screen Recording 2022-03-19 at 8 11 23 PM](https://user-images.githubusercontent.com/44144647/159131363-e7de60e9-f74e-472d-95a7-2a97c64e387d.gif)



### Learned new
* Usage of **Proxy** pattern
