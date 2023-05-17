#include <vector>
#include <iostream>
#include <limits.h>

#define INVALID_NUMBER -1

class MergeInsertSort
{
private:
    std::vector<int> m_vectorList;
    const int m_insertionSortThreshold;
    int isValidNumber(char *str);
    void merge(std::vector<int> &container, int lower, int middle, int higher);
    void insertSort(std::vector<int> &container, int lower, int higher);
    void print(std::vector<int> container, int lower, int higher);
    /* data */
    MergeInsertSort(/* args */);

public:
    MergeInsertSort(char **av);
    void mergeSort(std::vector<int> &, int lower, int higher);
    std::vector<int> getVectorList() const;
    ~MergeInsertSort();
};

std::ostream &operator<<(std::ostream &output, MergeInsertSort const &src);
