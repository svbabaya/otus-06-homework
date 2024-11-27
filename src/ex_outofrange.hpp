#pragma once
#include <string>

class OutOfRangeException
{
public: 
    OutOfRangeException(std::string message) : m_message{message} {}
    std::string getMessage() const 
    {
        return m_message;
    }
private:
    std::string m_message;

};
