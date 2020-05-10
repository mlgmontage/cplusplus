#include <iostream>

class Log
{
public:
   const int LogLevelError = 0;
   const int LogLevelWarning = 1;
   const int LogLevelInfo = 2;

private:
   int m_LogLevel = LogLevelInfo;

public:
   void SetLevel(int level)
   {
      m_LogLevel = level;
   }
   void Info(const char *message)
   {
      std::cout << "[INFO]: " << message << std::endl;
   }

   void Error(const char *message)
   {
      std::cout << "[ERROR]: " << message << std::endl;
   }

   void Warn(const char *message)
   {
      std::cout << "[WARNING]: " << message << std::endl;
   }
};

int main()
{
   Log log;
   log.SetLevel(log.LogLevelInfo);
   log.Warn("Hello, world");

   return 0;
}
