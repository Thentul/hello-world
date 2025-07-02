#include <random>

class rng
{
    private:

    public:
    int generate()
    {
        std::random_device rd;
        std::mt19937 eng(rd());
        std::uniform_int_distribution<int> dist(1, 6);
        return dist(eng);
    }
};