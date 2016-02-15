BZengine
========

This repository contains a modified version of Zend Engine extracted from PHP source (based on
commit https://github.com/php/php-src/commit/ec37cecd90437d2493dab9548046a008c3046516).

The reasoning for this was purely educational, although I think the library may have some practical potential to be used
as a scripting engine embeddable in any kind of application.

### Building
1. Clone this repository.
2. Go to the newly created directory and run `./build`. If you see any errors, you're on your own.
3. If build finished without errors, you should see a `libZend.a` file inside `lib` directory.

The build process wasn't tested on Windows, and it fill fail there (sorry Windoze guys). By default a static library
is created, but you can use `libtool` to create a shared version.

### What was modified?
 * Moved useful or necessary bits of the code from PHP core (see commit history for details, although a better idea is to
   run a diff between `Zend` folder in this repo, and `Zend` in `php-src` in mentioned commit).
 * Modified `automake` files to build a position independent code, so it can be used to create a library. 
 * Removed dependency on TSRM (the library is not thread-safe).
 
### Disclaimer
The status of this project is *very* experimental. This code shouldn't be used for any other purpose than research or education.

### License
https://github.com/zaak/zengine/blob/master/Zend/LICENSE

This product includes the Zend Engine, freely available at http://www.zend.com.
