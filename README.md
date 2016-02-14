Zengine
=======

This repository contains a slightly modified version of Zend Engine extracted from PHP source (based on
commit https://github.com/php/php-src/commit/ec37cecd90437d2493dab9548046a008c3046516).

The reasoning for this was purely educational, although I think the library may have some practical potential to be used
as a scripting engine embeddable in any kind of application.

### How does it work? What to expect?
Zend Engine is the heart of PHP responsible for compilation of PHP scripts, and execution of the produced bytecode. As you may know,
many of the features in PHP come from extensions (for example `GD` offers a bunch of functions to process images, `mb_string` multibyte
strings, and so on). The same applies to functions like `fopen`, `file_get_contents` - they are a part of
[`standard` extension](https://github.com/php/php-src/tree/master/ext/standard). The extensions are not a part of Zend Engine, so you
will be not able to use them. If you try, you will see errors like one below.

```
Call to undefined function var_dump()
```

As you can see the possibilities will be quite limited, if you compare this to PHP you already know. What you will be able to do,
is to use all the PHP language mechanics, like creating classes and functions in PHP, and using them. Of course you will be able
to register in engine your own functions and classes, that will be later accessible from PHP level.

All this still requires some coding, and for now there's no usage examples. As I'm working on another project dependent on this lib,
so this hopefully should change soon.

### Building
1. Clone this repository.
2. Go to the newly created directory and run `./build`. If you see any errors, you're on your own.
3. If build finished without errors you should see a `libZend.a` file inside `lib` director.

The build process wasn't tested on Windows, and it fill fail there (sorry Windoze guys). By default a static library
is created, but you can use `libtool` to create a shared version).

### What was modified?
 * Moved useful or necessary bits of the code from PHP core (see commit history for details, although a better idea is to
   run a diff between `Zend` folder in this repo, and `Zend` in `php-src` in mentioned commit).
 * Modified `automake` files to build a position independent code, so it can be used to create a library. 
 * Removed dependency on TSRM (the library is not thread-safe).
 
### Disclaimer
The status of this project is *very* experimental. This code shouldn't be used for any other purpose than research or education.

### License
This product includes the Zend Engine, freely available at http://www.zend.com.