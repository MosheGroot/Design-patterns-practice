## Decorator

Little code with **Decorator** pattern for various wrappers of some `DataSource` class.

There is 3 types of decorators:
* Source decorator (data keeps the same)
* Encryption decorator (encypting data)
* Compression decorator (actually not compressing, but still exists)


### Result

* class `DataSource`
* namespace `Decorators`:
  + class `DataSourceDecorator`
  + class `DataEncryptionDecorator : DataSourceDecorator`
  + class `DataCompressionDecorator : DataSourceDecorator`

### Runtime

![Screen Recording 2022-03-16 at 6 08 07 PM](https://user-images.githubusercontent.com/44144647/158623739-95772d47-1af6-4404-add9-797812089ef7.gif)


### Learned new
* Usage of **Decorator** pattern
