# samp-warboot

[![sampctl](https://img.shields.io/badge/Mergevos-samp--among--us-2f2f2f.svg?style=for-the-badge)](https://github.com/Mergevos/samp-among-us)

Gamemode written for upcoming open.mp

## Installation

Use: 
```git
git clone Mergevos/samp-among-us
```

Simply run gamemode in three lines:
```bash
sampctl package ensure
sampctl package build
sampctl package run
```

# How to contribute.
 
## Variable Declaration
### Global
```c
// Global static variables have to be lower snake case.
// e.g
static 
    this_Variable;
// While new variables have to be upper snake case.
new 
    This_New;

```
### Local
```c
// We only accept this way of declaration

new 
    First,
    Second,
    Third;
```

### Functions

Functions must have prefix of module
All functions must use void tag if function doesn't return anything

```c
stock void:Function() 
{
}

database_Connect() //if used as static 
Database_Connect() //if not
```
