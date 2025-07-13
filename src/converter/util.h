//
// Created by liugantang on 25-7-13.
//

#ifndef UTIL_H
#define UTIL_H
#include <cstdint>


namespace util
{
    /**
     * @brief Calculates the default number of concurrent FFmpeg tasks based on system hardware
     * @return The recommended number of concurrent FFmpeg tasks, minimum of 1
     */
    uint32_t getDefaultTaskCount();
};



#endif //UTIL_H
