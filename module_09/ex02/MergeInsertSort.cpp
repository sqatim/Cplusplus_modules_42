#include "MergeInsertSort.hpp"

MergeInsertSort::MergeInsertSort(/* args */) : m_insertionSortThreshold(10), m_timeDeque(0), m_timeVector(0)
{
}

MergeInsertSort::MergeInsertSort(MergeInsertSort const &src) : m_insertionSortThreshold(10)
{
    *this = src;
    return;
}

MergeInsertSort &MergeInsertSort::operator=(MergeInsertSort const &src)
{
    if (this != &src)
    {
        this->m_timeDeque = src.getTimeDeque();
        this->m_timeVector = src.getTimeVector();
        this->m_dequeList = src.getDequeList();
        this->m_vectorList = src.getVectorList();
    }
    return (*this);
}

void MergeInsertSort::printBefore()
{
    std::cout << "Before: ";
    for (std::vector<int>::iterator it = this->m_vectorList.begin(); it != this->m_vectorList.end(); ++it)
    {
        std::cout << *it;
        if (it + 1 != this->m_vectorList.end())
            std::cout << " ";
    }
    std::cout << std::endl;
}

int MergeInsertSort::isValidNumber(char *str)
{
    long int number;

    for (int index = 0; str[index]; index++)
    {
        if (!isdigit(str[index]))
            return (INVALID_NUMBER);
    }
    number = atol(str);
    if (number > INT_MAX)
        return (INVALID_NUMBER);
    return ((int)number);
}

// Vector
void MergeInsertSort::insertSort(std::vector<int> &container, int lower, int higher)
{
    int value;
    int j;

    for (int index = lower + 1; index <= higher; index++)
    {
        j = index - 1;
        value = container[index];
        while (j > lower - 1 && container[j] > value)
        {
            container[j + 1] = container[j];
            j--;
        }
        container[j + 1] = value;
    }
}

void MergeInsertSort::merge(std::vector<int> &container, int lower, int middle, int higher)
{
    int i;
    int j;
    std::vector<int> temp;

    i = lower;
    j = middle + 1;
    while (i <= middle && j <= higher)
    {
        if (container[i] < container[j])
            temp.push_back(container[i++]);
        else
            temp.push_back(container[j++]);
    }
    while (i <= middle)
        temp.push_back(container[i++]);
    while (j <= higher)
        temp.push_back(container[j++]);
    i = lower;
    for (std::vector<int>::iterator it = temp.begin();i <= higher; ++it)
    {
        this->m_vectorList[i++] = *it;
    }
}

void MergeInsertSort::mergeInsertSortImplementation(std::vector<int> &list, int lower, int higher)
{
    int middle;

    if (higher - lower > this->m_insertionSortThreshold)
    {
        middle = (lower + higher) / 2;
        mergeInsertSortImplementation(list, lower, middle);
        mergeInsertSortImplementation(list, middle + 1, higher);
        merge(list, lower, middle, higher);
    }
    else
        this->insertSort(list, lower, higher);
}

// Deque

void MergeInsertSort::insertSort(std::deque<int> &container, int lower, int higher)
{
    int value;
    int j;

    for (int index = lower + 1; index <= higher; index++)
    {
        j = index - 1;
        value = container[index];
        while (j > lower - 1 && container[j] > value)
        {
            container[j + 1] = container[j];
            j--;
        }
        container[j + 1] = value;
    }
}

void MergeInsertSort::merge(std::deque<int> &container, int lower, int middle, int higher)
{
    int i;
    int j;
    std::deque<int> temp;

    i = lower;
    j = middle + 1;
    while (i <= middle && j <= higher)
    {
        if (container[i] < container[j])
            temp.push_back(container[i++]);
        else
            temp.push_back(container[j++]);
    }
    while (i <= middle)
        temp.push_back(container[i++]);
    while (j <= higher)
        temp.push_back(container[j++]);
    i = lower;
    for (std::deque<int>::iterator it = temp.begin(); i <= higher; ++it) //TODO: Verify i;
    {
        this->m_vectorList[i++] = *it;
    }
}

void MergeInsertSort::mergeInsertSortImplementation(std::deque<int> &list, int lower, int higher)
{
    int middle;

    if (higher - lower > this->m_insertionSortThreshold)
    {
        middle = (lower + higher) / 2;
        mergeInsertSortImplementation(list, lower, middle);
        mergeInsertSortImplementation(list, middle + 1, higher);
        merge(list, lower, middle, higher);
    }
    else
        this->insertSort(list, lower, higher);
}

MergeInsertSort::MergeInsertSort(char **av) : m_insertionSortThreshold(4), m_timeDeque(0), m_timeVector(0)
{
    char *token;
    int number;
    std::clock_t start;
    std::clock_t end;

    for (int index = 0; av[index] != NULL; index++)
    {
        token = strtok(av[index], " ");
        while (token != NULL)
        {
            number = isValidNumber(token);
            if (number == INVALID_NUMBER)
                throw std::string("ERROR: Invalid number");
            this->m_vectorList.push_back(number);
            this->m_dequeList.push_back(number);
            token = strtok(NULL, " ");
        }
    }
    if (this->m_vectorList.size())
    {
        this->printBefore();
        start = std::clock();
        this->mergeInsertSortImplementation(this->m_vectorList, 0, this->m_vectorList.size() - 1);
        end = std::clock();
        this->m_timeVector = (end - start) / (double)CLOCKS_PER_SEC * 1000;
        start = std::clock();
        this->mergeInsertSortImplementation(this->m_dequeList, 0, this->m_dequeList.size() - 1);
        end = std::clock();
        this->m_timeDeque = (end - start) / (double)CLOCKS_PER_SEC * 1000;
    }
}

std::vector<int> MergeInsertSort::getVectorList() const
{
    return (this->m_vectorList);
}

std::deque<int> MergeInsertSort::getDequeList() const
{
    return (this->m_dequeList);
}

double MergeInsertSort::getTimeVector() const
{
    return (this->m_timeVector);
}

double MergeInsertSort::getTimeDeque() const
{
    return (this->m_timeDeque);
}

MergeInsertSort::~MergeInsertSort()
{
}

std::ostream &operator<<(std::ostream &output, MergeInsertSort const &src)
{
    std::vector<int> vectorList = src.getVectorList();
    std::deque<int> dequeList = src.getDequeList();
    if (vectorList.size())
    {
        output << "After: ";
        for (std::vector<int>::iterator it = vectorList.begin(); it != vectorList.end(); ++it)
        {
            output << *it;
            if (it + 1 != vectorList.end())
                output << " ";
        }
        output << std::endl;
        output << "Time to process a range of " << vectorList.size() << " elements with std::vector : " << src.getTimeVector() << std::endl;
        output << "Time to process a range of " << dequeList.size() << " elements with std::deque : " << src.getTimeDeque();
    }
    else
        output << "Warning: you haven't entered any numbers";
    return (output);
}