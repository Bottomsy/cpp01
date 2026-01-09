#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::ifstream s1file(av[1]);
    std::ofstream res("bzizil.txt");
    std::string s1;
    std::string s2 = av[2];
    std::string s3 = av[3];
    size_t s2pos = 0;

    while (std::getline(s1file, s1)) 
    {
        size_t s2pos = 0;

        while ((s2pos = s1.find(s2, s2pos)) != std::string::npos) 
        {
            s1.erase(s2pos, s2.length());
            s1.insert(s2pos, s3);
            s2pos += s3.length(); // move past inserted text
        }

        res << s1 << '\n';
    }

    /*while(std::getline(s1file, s1))
    {
        while(1)
        {
            s2pos = s1.find(s2, s2pos);
            if(s2pos != 0 || s2pos < s1.size())
            {            
                s1.erase(s2pos, s2.size());
                s1.insert(s2pos, s3);
                res << s1;
            }
            else
            {
                res << s1;
                break;
            }
        }
        s2pos = 0;
    }*/
    //std::cout << s1;
}