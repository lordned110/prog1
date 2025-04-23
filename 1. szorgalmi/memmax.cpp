#include <vector>
int main()
{
    struct mem
    {
        long double ram;
    };
    std::vector<mem> v;
    while (true)
    {
        mem k;
        k.ram = 1;
        v.push_back(k);
    }
  return 0;
}
