#include <iostream>
#include <string>
#include <utility>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <vector>


void Task1(const std::string& str)
{
    std::cout << str << std::endl;
}


void Task2(auto& var1, auto& var2)
{   
    auto a = var1;
    var1 = var2;
    var2 = a;
}


std::pair<std::string, std::string> Task3(std::string name, std::string surname)
{
    std::pair<std::string, std::string> pair;
    
    pair.first = name;
    pair.second = surname;
    
    return pair;
}


constexpr long Task4_static(int num)
{
    
    long result = 1;
    for (int i{1}; i <= num; i++)
    {
        result*=i;
    }
    
    return result;

    // я нашел менее требовательное решение по строчкам
    // return num == 1 ? 1 : num * Factorial(num - 1);
}

long Task4(int num)
{
    
    long result = 1;
    for (int i{1}; i <= num; i++)
    {
        result*=i;
    }
    
    return result;
    // я нашел менее требовательное решение по строчкам
    // return num == 1 ? 1 : num * Factorial(num - 1);
}

void Task5()
{
    std::vector<int> vec;
    vec.push_back(2);
    int value;
    std::cout << "Введите число : ";
    std::cin >> value;

    auto func = [&]()
    {
        for (int i{1}; i <= value; i++)
        {
            vec.push_back(i);
        }
    };

    func();
}


int main()
{
    using namespace std;

    // {
    //     string str_{"Hello"};
    //
    //     Task1(str_);
    // }


    // {
    //     string a{"123"};
    //     string b{"321"};
    //
    //     Task2(a, b);
    // }


    // {
    //     string name{"John"};
    //     string surname{"Patterson"};
    //
    //     std::pair<std::string, std::string> pair = Task3(name, surname);
    //
    //     cout << pair.first << " " << pair.second;
    // }


    // {
    //     {
    //         auto start_time =  chrono::high_resolution_clock::now();
    //         int var{20};
    //         auto num = Task4(var);
    //       
    //     
    //         chrono::duration<double> search_time = chrono::high_resolution_clock::now() - start_time;
    //     
    //         cout << "Compile\n\n";
    //         cout << "result : " << num << endl;
    //         cout << "time : " << fixed << setprecision(10) << search_time.count() << "" << endl;
    //         cout << "_______________\n";
    //     }
    //
    //     {
    //         auto start_time =  chrono::high_resolution_clock::now();
    //         const int var{20};
    //         constexpr auto num = Task4_static(var);
    //     
    //     
    //         chrono::duration<double> search_time = chrono::high_resolution_clock::now() - start_time;
    //
    //         cout << "Runtime\n\n";
    //         cout << "result : " << num << endl;
    //         cout << "time : " << fixed << setprecision(10) << search_time.count() << "\n" << endl;
    //     }
    // }

    // {
    //     Task5();
    // }

}