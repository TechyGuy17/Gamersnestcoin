// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
 
  
const std::string nonWindowsAsciiArt =
          "\n                                                                   "\n
          "   d888b   .d8b.  .88b  d88. d88888b d8888b. .d8888. d8b   db d88888b .d8888. d888888b  .o88b.  .d88b.  d888888b d8b   db"\n 
          "  88' Y8b d8' `8b 88'YbdP`88 88'     88  `8D 88'  YP 888o  88 88'     88'  YP `~~88~~' d8P  Y8 .8P  Y8.   `88'   888o  88 "\n
          "  88      88ooo88 88  88  88 88ooooo 88oobY' `8bo.   88V8o 88 88ooooo `8bo.      88    8P      88    88    88    88V8o 88 "\n
          "  88  ooo 88~~~88 88  88  88 88~~~~~ 88`8b     `Y8b. 88 V8o88 88~~~~~   `Y8b.    88    8b      88    88    88    88 V8o88 "\n
          "  88. ~8~ 88   88 88  88  88 88.     88 `88. db   8D 88  V888 88.     db   8D    88    Y8b  d8 `8b  d8'   .88.   88  V888 "\n
          "   Y888P  YP   YP YP  YP  YP Y88888P 88   YD `8888Y' VP   V8P Y88888P `8888Y'    YP     `Y88P'  `Y88P'  Y888888P VP   V8P "\n;
                                                                                                                                                                                           
                                             

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt; 
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
