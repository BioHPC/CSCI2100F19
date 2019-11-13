---
layout: page
title: HW6
subtitle: Homework6 (20 points)
---

### Overview

Our goal of this homework is to implment two functions, expandExternal(p) and removeAboveExternal(p)
that we have learned in our lectures (Check the slides of Week12).

### Due

Tue, Nov 19 2019, 11:59 PM

## Hint
In the class header, I declated the public member functions as below:
```
    void expandExternal(const Position& p);             // expand external Node
    Position removeAboveExternal(const Position& p);    // remove p and parent
```

Then, the removeAboveExternal function can be started as below in the class file:

```
template <typename Object>
typename LinkedBinaryTree<Object>::Position LinkedBinaryTree<Object>::removeAboveExternal(const Position& p) // remove p and parent
{
...
}
```

### Submit

Email me with a compressed file (FirstnameLastname_HW6.zip or FirstnameLastname_HW6.tar.gz). The compressed file should have all source files and one output text file.

To create the tar.gz, the syntax is

```
$ tar -czvf filename.tar.gz /path/to/dir1
```

Please check this [link](https://www.cyberciti.biz/faq/how-to-create-tar-gz-file-in-linux-using-command-line/) for further info of tar.gz 
