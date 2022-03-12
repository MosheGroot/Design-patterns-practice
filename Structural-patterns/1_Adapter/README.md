## Adapter

Simple code with **Adapter** pattern, where delivery `Manager` is adapter between client `Items` and delivery `Boxes`.


### Result

+ namespace `Items` for client items:
  * class `AItem` 
  * class `Cube : AItem`
  * class `Ball : AItem`
+ namespace `Delivery` with:
  * class `Box` with 3 dementions
  * class `Manager` as adapter 
+ simple `main()` with example 

### Runtime

![2022-03-12 14-48-04](https://user-images.githubusercontent.com/44144647/158016950-963a7f73-ce86-428f-a426-0de5c1a5ed58.gif)


### Learned new
* Usage of **Adapter** pattern
