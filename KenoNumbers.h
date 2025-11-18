#ifndef KENONUMBERS_H
#define KENONUMBERS_H
#include <vector>

class KenoNumbers {
private:
    std::vector<int> m_kenoNumbers;
public:
    void generateNumbers();
    std::vector <int> getKenoNumbers(); // return KenoNumbers generated
    void printKenoNumbers();
    void clearKenoNumbers();
};

#endif //KENONUMBERS_H
