#include <vector>
#include <deque>
#include <iostream>
#include <limits.h>

#define INVALID_NUMBER -1

class MergeInsertSort
{
private:
    const int m_insertionSortThreshold;
    std::vector<int> m_vectorList;
    std::deque<int> m_dequeList;
    double m_timeDeque;
    double m_timeVector;

    int isValidNumber(char *str);
    void merge(std::vector<int> &container, int lower, int middle, int higher);
    void insertSort(std::vector<int> &container, int lower, int higher);
    void merge(std::deque<int> &container, int lower, int middle, int higher);
    void insertSort(std::deque<int> &container, int lower, int higher);
    void printBefore();
    /* data */
    MergeInsertSort(/* args */);

public:
    MergeInsertSort(char **av);
    MergeInsertSort(MergeInsertSort const &src);
    MergeInsertSort &operator=(MergeInsertSort const &src);
    void mergeInsertSortImplementation(std::vector<int> &, int lower, int higher);
    void mergeInsertSortImplementation(std::deque<int> &, int lower, int higher);
    std::vector<int> getVectorList() const;
    std::deque<int> getDequeList() const;
    double getTimeVector() const;
    double getTimeDeque() const;
    ~MergeInsertSort();
};

std::ostream &operator<<(std::ostream &output, MergeInsertSort const &src);
