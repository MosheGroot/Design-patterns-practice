## Builder

Simple code with **Builder** pattern applied to example `Restaurant` with ability to order some custom meal or `Kid's meal`.

Thus `Stuff` appears to be a **builder** and `Cashier` is a **director**.

### Result

+ namespace `Restaurant::Items` with:
  + class `Base`
  + class `Burger : Base`
  + class `FrenchFries : Base`
  + class `Salad : Base`
+ class `Restaurant::Meal` that contains order of `Restaurant::Items`:
+ `Stuff` as a builder
+ `Cashier` as a director. It can handle order *item by item* or *all in one* (`Kid's meal`)
+ order from console arguments

### Runtime

![2022-03-11 16-28-02](https://user-images.githubusercontent.com/44144647/157877928-422e9c2a-a598-4f9b-8e67-b0711814ac1b.gif)



### Learned new
* Usage of **Builder** pattern
