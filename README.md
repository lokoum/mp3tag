##mp3tag

This is just a simple program to display and set MP3 metada, it is very simple to use !

##dependencies

**Nothing**

##Example

```
$ make; make clean

$ ./mp3tag sail.mp3 --disp-tag
no TAG found

$ ./mp3tag sail.mp3 --set-tag
title: Sail
artist: Awolnation
album: Back from Earth 
year: 2011
comment: Best song Ever
the tag has been updated !

$ ./mp3tag ~/Music/sail.mp3 --disp-tag
title: Sail
artist: Awolnation
album: Back from Earth
year: 2011
comment: Best song Ever
```
