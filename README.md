# Tutorial: How to fuck up your pc

> Note: The code is currently broken and you will have to find workaround yourself
1. Open notepad and copy and paste code below:
```c
#include <stdio.h> 
#include <random.h> 
void fuckurmem(){srand(time(0));for(;;){malloc(100);memcpy(rand(),rand(),1);}}int main(){int confirm;printf("This program will mess with your memory and eventually crash your pc or corrupt your hardware / storage, are you sure? > ");scanf("%d",&confirm);if(confirm==1)fuckurmem();}
```
2. Press Ctrl+S and change file type to all files
3. save the code as name "main.c"
4. Copy and paste below shell script to your terminal
```sh
gcc main.c ./main
chmod +x ./main
sudo ./main
```
5. Congrats! Your pc has been successfully fucked!
## Troubleshooting
### 1. The terminal says "gcc: No such file or directory"!

Run ```sh
sudo apt install gcc``` to install gcc

### 1-1. I tried above solution but it says gcc isn't recognized as an internal or external command blabla!

You are using windows. You'll have to download MinGW

### 2. I saved the code but extension is ".c.txt" instead of ".c"

Carefully read above tutorial and try again
