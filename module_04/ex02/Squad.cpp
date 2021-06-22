#include "Squad.hpp"

Squad::Squad() : m_count(0)
{
    this->m_units = nullptr;
    return ;
}

Squad::Squad(Squad const& src)
{
    *this = src;
    return ;
}

Squad& Squad::operator=(Squad const & src)
{
    if(this != &src)
    {
        this->m_count = src.m_count;
        if(src.m_count > 0)
        {
            if(this->m_units != nullptr)
            {
                for(int i = 0; i < this->m_count; i++)
                    delete this->m_units[i];
            }
            this->m_units = new ISpaceMarine*[src.m_count];
            for(int i = 0; i < src.m_count; i++)
                this->m_units[i] = src.m_units[i];
        }
    }
    return (*this);
}

int Squad::getCount() const
{
    return (this->m_count);
}

ISpaceMarine* Squad::getUnit(int unit) const
{
    if(unit < 0 || unit > m_count)
        return (nullptr);
    return (m_units[unit]);
}

int Squad::push(ISpaceMarine* spaceMarine)
{
    if(this->m_count == 0)
    {
        m_units = new ISpaceMarine*[1];
        m_units[0] = spaceMarine;
        m_count = 1;
        return (m_count);
    }
    else
    {
        ISpaceMarine **tmp = new ISpaceMarine*[m_count+1];
        int i = 0;
        while (i < m_count)
        {
            tmp[i] = m_units[i];
            i++;
        }
        delete[] m_units;
        tmp[i] = spaceMarine;
        m_units = tmp;
        m_count++;
        return (m_count);
    }
}

Squad::~Squad()
{
	for (int i = 0; i < m_count; i++)
		delete m_units[i];
    return ;
}
