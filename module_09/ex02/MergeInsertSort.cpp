#include "MergeInsertSort.hpp"

MergeInsertSort::MergeInsertSort(/* args */) : m_insertionSortThreshold(10)
{
}

void MergeInsertSort::insertSort(std::vector<int> &container, int lower, int higher)
{
    int value;
    int j;

    int index1;
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
    for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); ++it)
    {
        this->m_vectorList[i++] = *it;
    }
}
void MergeInsertSort::print(std::vector<int> container, int lower, int higher)
{
    while (lower <= higher)
    {
        std::cout << container[lower++] << " ";
    }
    std::cout << std::endl;
}

void MergeInsertSort::mergeSort(std::vector<int> &list, int lower, int higher)
{
    int middle;

    if (higher - lower > this->m_insertionSortThreshold)
    {
        middle = (lower + higher) / 2;
        mergeSort(list, lower, middle);
        mergeSort(list, middle + 1, higher);
        merge(list, lower, middle, higher);
    }
    else
        this->insertSort(list, lower, higher);
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

MergeInsertSort::MergeInsertSort(char **av) : m_insertionSortThreshold(4)
{
    char *token;
    int number;
    for (int index = 0; av[index] != NULL; index++)
    {
        token = strtok(av[index], " ");
        while (token != NULL)
        {
            number = isValidNumber(token);
            if (number == INVALID_NUMBER)
                throw std::string("ERROR: Invalid number");
            this->m_vectorList.push_back(number);
            token = strtok(NULL, " ");
        }
    }
    mergeSort(this->m_vectorList, 0, this->m_vectorList.size() - 1);
    std::cout << *this << std::endl;
}

std::vector<int> MergeInsertSort::getVectorList() const
{
    return (this->m_vectorList);
}

MergeInsertSort::~MergeInsertSort()
{
}

std::ostream &operator<<(std::ostream &output, MergeInsertSort const &src)
{
    std::vector<int> vectorList = src.getVectorList();

    output << "Before: " << std::endl;
    output << "After: " << std::endl;
    output << "Vector: ";
    for (std::vector<int>::iterator it = vectorList.begin(); it != vectorList.end(); ++it)
    {
        output << *it << " ";
    }
    return (output);
}