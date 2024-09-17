#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout<< "We are going to perfrom a little check, please stand by...\n" << std::endl;
    system("sfc /scannow");
    system("chkdsk C: /f /r");
    return 0;
}
