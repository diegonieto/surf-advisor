#include "Stats.h"

class SurfStat : public Stats {
    public:

    private:
    /**
     * @brief Period between two consecutive waves
     * 
     */
    int _period;

    /**
     * @brief Interval of time that covers this stats
     * 
     */
    int _interval;
};