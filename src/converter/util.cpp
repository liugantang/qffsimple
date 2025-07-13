//
// Created by liugantang on 25-7-13.
//

#include "util.h"
#include <thread>

//Assume the number of threads used by a single ffmpeg process
constexpr int SINGLE_TASK_THREADS = 16;


uint32_t util::getDefaultTaskCount()
{
    const uint32_t uiSysThreads = std::thread::hardware_concurrency();
    const uint32_t uiTasks = uiSysThreads/SINGLE_TASK_THREADS > 1 ? uiSysThreads/SINGLE_TASK_THREADS : 1;
    return uiTasks;
}
