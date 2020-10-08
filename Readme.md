# How to compile the php extension

## Requirements
You need to install gcc, make, php7.2-dev (change to your php version)

## Configuration
1. cd into tdp folder
2. Run `phpize`
3. Run `./configure`
4. Run `make`
5. Run `make install`

## How to test
1. Create a sample php script and call these functions:
```php
  <?php
   hello();
   env();
```