#ifndef STUFF_H
#define STUFF_H
#include <string>

class Runner
{
public:
    Runner();
    std::string run(std::string path);
    std::string runxterm(std::string path);
    std::string runGnomeTerminal(std::string path);
};

#endif // STUFF_H
