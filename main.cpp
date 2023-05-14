#include <iostream>
#include<cstdlib>
#include<cstring>
#include <windows.h>
int main() {



    char cmd[10];



    ShellExecute(0, "open", "cmd.exe", "/C ipconfig > out.txt", 0, SW_HIDE);

    while (true) {
        std::cout << "Please enter a command prompt command:" << std::endl;
        std::cin >> cmd;
        //Check


        if (strcpy_s(cmd, cmd) == 'exit') {
            break;
        }

        system(cmd);
    }










    return 0;
}

