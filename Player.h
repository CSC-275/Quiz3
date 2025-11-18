#ifndef CONSOLE_H
#define CONSOLE_H
#include <vector>

class Player {
private:
    std::vector<int> m_playerNumbers;
public:
    void inputPlayerNumbers();
    std::vector<int> getPlayerNumbers(); // return numbers selected by player
    void printPlayerNumbers();
    void clearPlayerNumbers();
};

#endif //CONSOLE_H
