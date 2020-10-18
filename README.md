# kImageAnnotator [![Build Status][travis-badge]][travis-url] [![Translation status][weblate-badge]][weblate-url]
Tool for annotating images

Version 0.4.0 - Work in Progress

![kImageAnnotator](https://i.imgur.com/cyS8FRD.png "kImageAnnotator")

### Dependencies

kImageAnnotator depends on [kColorPicker](https://github.com/ksnip/kColorPicker) which needs
to be installed before building kImageAnnotator. Install instructions can be found on the github page.

### Building from source

1. Get latest release from GitHub by cloning the repo:  
    `$ git clone https://github.com/ksnip/kImageAnnotator`
2. Change to repo directory:  
    `$ cd kImageAnnotator`  
3. Make new build directory and enter it:  
    `$ mkdir build && cd build`  
4. Create the makefile and build the project:  
    `$ cmake .. && make`  
5. Install shared library (not required when only using the example):  
    `$ sudo make install`
6. Run the example application:  
    `$ ./example/kImageAnnotator-example`

### Shared vs Static

You can either build the project as shared library by providing the flag `-DBUILD_SHARED_LIBS=ON`
to cmake or `-DBUILD_SHARED_LIBS=OFF` to build as static library. When no flag is provided a 
static library is build. For windows we currenlty only support building as static library.

### Integrate library

1. Let cmake find the shared library, optionally with version  
    `set(KIMAGEANNOTATOR_MIN_VERSION "0.x.x")`  
    `find_package(kImageAnnotator ${KIMAGEANNOTATOR_MIN_VERSION} REQUIRED)`  

2. Link the library with your application  
    `target_link_libraries(myApp kImageAnnotator)`  


### Translations
We are always looking for help with translations, contributors are welcome!  
For translations we use [Weblate](https://hosted.weblate.org/projects/kimageannotator/kimageannotator/)!  
[![Translation status](https://hosted.weblate.org/widgets/kimageannotator/-/kimageannotator/multi-green.svg)](https://hosted.weblate.org/engage/kimageannotator/?utm_source=widget)


### Acknowledgement
Stickers designed by [OpenMoji](https://openmoji.org/) – the open-source emoji and icon project.


[travis-badge]:        https://img.shields.io/travis/ksnip/kimageannotator.svg?label=travis&logo=travis
[travis-url]:          https://travis-ci.org/ksnip/kimageannotator

[weblate-badge]:       https://hosted.weblate.org/widgets/kimageannotator/-/kimageannotator/svg-badge.svg
[weblate-url]:         https://hosted.weblate.org/engage/kimageannotator/?utm_source=widget